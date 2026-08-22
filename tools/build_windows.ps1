[CmdletBinding()]
param(
    [string]$RomPath = "",
    [string]$BuildDir = "",
    [string]$InstallDir = "",
    [string]$NesRecompExe = "",
    [switch]$DeepScanCDrive
)
$ErrorActionPreference = "Stop"
$SourceDir = Split-Path -Parent (Split-Path -Parent $MyInvocation.MyCommand.Path)
$ProjectRoot = Split-Path -Parent (Split-Path -Parent $SourceDir)
if (-not $BuildDir) { $BuildDir = Join-Path $ProjectRoot "Build\1.1.1\cmake" }
if (-not $InstallDir) { $InstallDir = Join-Path $BuildDir "install" }
$resolvedProject = [IO.Path]::GetFullPath($ProjectRoot).TrimEnd('\') + '\'
foreach ($candidate in @($BuildDir,$InstallDir)) {
    $resolvedCandidate = [IO.Path]::GetFullPath($candidate)
    if (-not $resolvedCandidate.StartsWith($resolvedProject,[StringComparison]::OrdinalIgnoreCase)) {
        throw "Build and install directories must stay inside the project folder: $resolvedCandidate"
    }
}
$scanScript = Join-Path $SourceDir "tools\find_build_tools_windows.ps1"
$scanJson = Join-Path $ProjectRoot "Temp\build-tool-scan.json"
New-Item -ItemType Directory -Path (Split-Path -Parent $scanJson) -Force | Out-Null
& $scanScript -DeepScanCDrive:$DeepScanCDrive -OutputJson $scanJson | Out-Host
$cmake = Get-Command cmake.exe -ErrorAction SilentlyContinue
if (-not $cmake) {
    $candidates = @(
        "$env:ProgramFiles\CMake\bin\cmake.exe",
        "$env:ProgramFiles\Microsoft Visual Studio\2022\Enterprise\Common7\IDE\CommonExtensions\Microsoft\CMake\CMake\bin\cmake.exe",
        "$env:ProgramFiles\Microsoft Visual Studio\2022\Community\Common7\IDE\CommonExtensions\Microsoft\CMake\CMake\bin\cmake.exe",
        "$env:ProgramFiles\Microsoft Visual Studio\2022\BuildTools\Common7\IDE\CommonExtensions\Microsoft\CMake\CMake\bin\cmake.exe",
        "${env:ProgramFiles(x86)}\Microsoft Visual Studio\2022\BuildTools\Common7\IDE\CommonExtensions\Microsoft\CMake\CMake\bin\cmake.exe"
    ) | Where-Object { Test-Path -LiteralPath $_ }
    if (-not $candidates) { throw "CMake was not found. Review $scanJson or install CMake/Visual Studio C++ Build Tools." }
    $CMakeExe = $candidates[0]
} else { $CMakeExe = $cmake.Source }
if (Test-Path -LiteralPath $BuildDir) { Remove-Item -LiteralPath $BuildDir -Recurse -Force }
$args = @("-S",$SourceDir,"-B",$BuildDir,"-A","x64","-DBUILD_TESTING=ON")
if ($RomPath) {
    if (-not (Test-Path -LiteralPath $RomPath)) { throw "ROM not found: $RomPath" }
    $args += "-DMM2_TEST_ROM=$RomPath"
}
if (-not $NesRecompExe) {
    $candidateTool = Join-Path $ProjectRoot "Build\Tools\NESRecomp\NESRecomp.exe"
    if (Test-Path -LiteralPath $candidateTool) { $NesRecompExe = $candidateTool }
}
if ($RomPath -and $NesRecompExe) {
    $args += "-DMM2_NESRECOMP_EXE=$NesRecompExe"
    $args += "-DMM2_PROJECT_TEMP=$(Join-Path $ProjectRoot 'Temp\1.1.1')"
}
try {
    & $CMakeExe @args -G "Visual Studio 17 2022"
    if ($LASTEXITCODE -ne 0) { throw "Visual Studio CMake configure failed: $LASTEXITCODE" }
} catch {
    Write-Warning "Visual Studio generator failed; trying Ninja."
    $args = @("-S",$SourceDir,"-B",$BuildDir,"-G","Ninja","-DCMAKE_BUILD_TYPE=Release","-DBUILD_TESTING=ON")
    if ($RomPath) { $args += "-DMM2_TEST_ROM=$RomPath" }
    if ($RomPath -and $NesRecompExe) {
        $args += "-DMM2_NESRECOMP_EXE=$NesRecompExe"
        $args += "-DMM2_PROJECT_TEMP=$(Join-Path $ProjectRoot 'Temp\1.1.1')"
    }
    & $CMakeExe @args
    if ($LASTEXITCODE -ne 0) { throw "Ninja CMake configure failed: $LASTEXITCODE" }
}
& $CMakeExe --build $BuildDir --config Release --parallel
if ($LASTEXITCODE -ne 0) { throw "Build failed: $LASTEXITCODE" }
$CTestExe = Join-Path (Split-Path -Parent $CMakeExe) 'ctest.exe'
if (-not (Test-Path -LiteralPath $CTestExe)) {
    $ctest = Get-Command ctest.exe -ErrorAction SilentlyContinue
    if (-not $ctest) { throw 'ctest.exe was not found beside CMake or on PATH.' }
    $CTestExe = $ctest.Source
}
& $CTestExe --test-dir $BuildDir -C Release --output-on-failure
if ($LASTEXITCODE -ne 0) { throw "Headless tests failed: $LASTEXITCODE" }
New-Item -ItemType Directory -Path $InstallDir -Force | Out-Null
& $CMakeExe --install $BuildDir --config Release --prefix $InstallDir
if ($LASTEXITCODE -ne 0) { throw "Install failed: $LASTEXITCODE" }
Write-Host "Windows build complete: $InstallDir"
Write-Host "The ROM was referenced for tests only and was not copied."


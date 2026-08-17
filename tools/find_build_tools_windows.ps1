[CmdletBinding()]
param(
    [switch]$DeepScanCDrive,
    [string]$OutputJson = "build-tool-scan.json"
)
$ErrorActionPreference = "SilentlyContinue"
$found = [ordered]@{
    format = "mega-man-2-windows-build-tool-scan-v1"
    date = (Get-Date).ToString("o")
    path_commands = @{}
    standard_paths = @()
    deep_scan = @()
}
foreach ($name in @("cmake.exe","ninja.exe","cl.exe","python.exe","py.exe","vswhere.exe")) {
    $cmd = Get-Command $name -ErrorAction SilentlyContinue
    if ($cmd) { $found.path_commands[$name] = $cmd.Source }
}
$standard = @(
    "$env:ProgramFiles\CMake\bin\cmake.exe",
    "$env:ProgramFiles\Microsoft Visual Studio\2022\Community\Common7\IDE\CommonExtensions\Microsoft\CMake\CMake\bin\cmake.exe",
    "$env:ProgramFiles\Microsoft Visual Studio\2022\BuildTools\Common7\IDE\CommonExtensions\Microsoft\CMake\CMake\bin\cmake.exe",
    "${env:ProgramFiles(x86)}\Microsoft Visual Studio\Installer\vswhere.exe",
    "$env:ProgramFiles\CMake\bin\ninja.exe",
    "$env:LOCALAPPDATA\Programs\Python\Python313\python.exe",
    "$env:LOCALAPPDATA\Programs\Python\Python312\python.exe"
)
foreach ($path in $standard) { if ($path -and (Test-Path -LiteralPath $path)) { $found.standard_paths += $path } }
if ($DeepScanCDrive) {
    Write-Host "Deep scanning C:\ for cmake.exe, ninja.exe, cl.exe and python.exe. This can take a long time."
    foreach ($name in @("cmake.exe","ninja.exe","cl.exe","python.exe")) {
        Get-ChildItem -LiteralPath "C:\" -Filter $name -File -Recurse -Force -ErrorAction SilentlyContinue |
            Select-Object -First 50 -ExpandProperty FullName | ForEach-Object { $found.deep_scan += $_ }
    }
}
$found | ConvertTo-Json -Depth 6 | Set-Content -LiteralPath $OutputJson -Encoding UTF8
$found | ConvertTo-Json -Depth 6

[CmdletBinding()]
param(
    [string]$Destination = "",
    [switch]$Force
)
$SourceDir = Split-Path -Parent (Split-Path -Parent $MyInvocation.MyCommand.Path)
$ProjectRoot = Split-Path -Parent (Split-Path -Parent $SourceDir)
if (-not $Destination) { $Destination = Join-Path $ProjectRoot "Temp\Installed-Source-Copy" }
$projectPrefix = [IO.Path]::GetFullPath($ProjectRoot).TrimEnd('\') + '\'
$resolvedDestination = [IO.Path]::GetFullPath($Destination)
if (-not $resolvedDestination.StartsWith($projectPrefix,[StringComparison]::OrdinalIgnoreCase)) {
    throw "Destination must remain inside the project folder: $resolvedDestination"
}
if ((Test-Path -LiteralPath $Destination) -and -not $Force) {
    throw "Destination exists. Use -Force to replace it: $Destination"
}
if (Test-Path -LiteralPath $Destination) { Remove-Item -LiteralPath $Destination -Recurse -Force }
New-Item -ItemType Directory -Path $Destination -Force | Out-Null
Copy-Item -Path (Join-Path $SourceDir '*') -Destination $Destination -Recurse -Force
Write-Host "Source copied to $Destination"
Write-Host "No ROM was copied. Keep the ROM in a separate test-input folder."

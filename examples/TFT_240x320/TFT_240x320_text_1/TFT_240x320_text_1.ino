// библиотека для работы с дисплеем
#include <UTFT.h>
// создаём объект класса UTFT
// и передаём идентификатор модели дисплея и номера пинов
// к которым подключаются линии SCK, SDI (MOSI), D/C, RESET, CS
UTFT myGLCD(TFT01_22SP, 9, 8, 12, 11, 10);
// объявления встроенного шрифта
extern uint8_t BigFont[];

void setup()
{
  // инициализируем дисплей
  myGLCD.InitLCD();
  // очищаем экран
  myGLCD.clrScr();
  // выбираем тип шрифта
  myGLCD.setFont(BigFont);
  // печатаем «Hello, world!» в центре верхней строки дисплея
  myGLCD.print("Hello, world!", CENTER, 0);
}
void loop()
{
}

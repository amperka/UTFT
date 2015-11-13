// библиотека для работы с дисплеем
#include <UTFT.h>
// создаём объект класса UTFT
// и передаём идентификатор модели дисплея и номера управляющих пинов
UTFT myGLCD(CTE32HR, 38, 39, 40, 41);
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

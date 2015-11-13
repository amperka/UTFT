// библиотека для работы с дисплеем
#include <UTFT.h>
// создаём объект класса UTFT
// и передаём идентификатор модели дисплея и номера управляющих пинов
UTFT myGLCD(CTE32HR, 38, 39, 40, 41);
// объявления встроенных шрифтов
extern uint8_t SmallFont[];
extern uint8_t BigFont[];
extern uint8_t SevenSegNumFont[];

void setup()
{
}

void loop()
{
  // инициализируем дисплей с вертикальной ориентацией
  myGLCD.InitLCD(0);
  // очищаем экран
  myGLCD.clrScr();
  // выбираем большой шрифт
  myGLCD.setFont(BigFont);
  // печатаем строку в центре верхней строки дисплея
  myGLCD.print("CTE32HR", CENTER, 0);
  // выбираем большой шрифт
  myGLCD.setFont(SmallFont);
  // печатаем строку в указанной строке позиции
  myGLCD.print("Hello from Amperka!", CENTER, 100);
  // выбираем семисегментный шрифт
  myGLCD.setFont(SevenSegNumFont);
  // печатаем строку в указанной строке позиции
  myGLCD.print("12345", CENTER, 200);
  // ждём 1 секунду
  delay(1000);

  // инициализируем дисплей с горизонтальной ориентацией
  myGLCD.InitLCD(1);
  // очищаем экран
  myGLCD.clrScr();
  // выбираем большой шрифт
  myGLCD.setFont(BigFont);
  // печатаем строку в центре верхней строки дисплея
  myGLCD.print("Hello, user!", CENTER, 0);
  // выбираем большой шрифт
  myGLCD.setFont(SmallFont);
  // печатаем строку в указанной строке позиции
  myGLCD.print("The screen is 3.2 diagonal", CENTER, 100);
  // выбираем семисегментный шрифт
  myGLCD.setFont(SevenSegNumFont);
  // печатаем строку в указанной строке позиции
  myGLCD.print("67890", CENTER, 200);
  // ждём 1 секунду
  delay(1000);
}

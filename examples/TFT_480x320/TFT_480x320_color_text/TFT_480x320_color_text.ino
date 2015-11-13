// библиотека для работы с дисплеем
#include <UTFT.h>
// создаём объект класса UTFT
// и передаём идентификатор модели дисплея и номера управляющих пинов
UTFT myGLCD(CTE32HR, 38, 39, 40, 41);
// объявления встроенного шрифта
extern uint8_t BigFont[];
void setup()
{
  // инициализируем дисплей с вертикальной ориентацией
  myGLCD.InitLCD();
  // очищаем экран
  myGLCD.clrScr();
  // выбираем большой шрифт
  myGLCD.setFont(BigFont);
  // устанавливаем красный цвет «чернил» для печати и рисования
  myGLCD.setColor(VGA_RED);
  // печатаем строку в указанной строке позиции
  myGLCD.print("Hello, World!", CENTER, 0);
  // устанавливаем синий цвет «чернил» для печати и рисования
  myGLCD.setColor(VGA_BLUE);
  // печатаем строку в указанной строке позиции
  myGLCD.print("Hello, World!", CENTER, 36);
  // устанавливаем зелёный цвет «чернил» для печати и рисования
  myGLCD.setColor(VGA_GREEN);
  // печатаем строку в указанной строке позиции
  myGLCD.print("Hello, World!", CENTER, 72);
  // устанавливаем серебряный цвет «чернил» для печати и рисования
  myGLCD.setColor(VGA_SILVER);
  // печатаем строку в указанной строке позиции
  myGLCD.print("Hello, World!", CENTER, 108);
}
void loop()
{
}

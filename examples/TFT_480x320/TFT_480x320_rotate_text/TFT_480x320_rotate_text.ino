// библиотека для работы с дисплеем
#include <UTFT.h>
// создаём объект класса UTFT
// и передаём идентификатор модели дисплея и номера управляющих пинов
UTFT myGLCD(CTE32HR, 38, 39, 40, 41);
// объявления встроенного шрифта
extern uint8_t BigFont[];

void setup()
{
  // инициализируем дисплей с горизонтальной ориентацией
  myGLCD.InitLCD();
  // очищаем экран
  myGLCD.clrScr();
  // выбираем большой шрифт
  myGLCD.setFont(BigFont);
  // устанавливаем зелёный цвет «чернил» для печати и рисования
  myGLCD.setColor(VGA_GREEN);
}
void loop()
{
  // каждый цикл печатаем строку с поворотам на 20 градусов
  for (int deg = 0; deg < 360; deg += 20) {
    String text = "Amperka";
    myGLCD.print(text, 240, 160, deg);
  }
}

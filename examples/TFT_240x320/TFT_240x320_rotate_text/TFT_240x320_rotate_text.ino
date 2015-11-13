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
  // инициализируем дисплей с вертикальной ориентацией
  myGLCD.InitLCD(0);
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
    myGLCD.print(text, 120, 160, deg);
  }
}

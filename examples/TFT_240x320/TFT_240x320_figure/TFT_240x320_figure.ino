// библиотека для работы с дисплеем
#include <UTFT.h>

// создаём объект класса UTFT
// и передаём идентификатор модели дисплея и номера пинов
// к которым подключаются линии SCK, SDI (MOSI), D/C, RESET, CS
UTFT myGLCD(TFT01_22SP, 9, 8, 12, 11, 10);

void setup()
{
  // инициализируем дисплей с вертикальной ориентацией
  myGLCD.InitLCD(0);
  // очищаем экран
  myGLCD.clrScr();
}

void loop()
{
  // устанавливаем чёрный цвет «чернил» для печати и рисования
  myGLCD.setColor(0, 0, 0);
  // вывод закрашенного прямоугольника
  myGLCD.fillRect(1, 1, 240, 320);

  // выводим 5 прямоугольников разными цветами
  for (int i = 1; i < 6; i++) {
    switch (i) {
      case 1:
        myGLCD.setColor(255, 0, 255);
        break;
      case 2:
        myGLCD.setColor(255, 0, 0);
        break;
      case 3:
        myGLCD.setColor(0, 255, 0);
        break;
      case 4:
        myGLCD.setColor(0, 0, 255);
        break;
      case 5:
        myGLCD.setColor(255, 255, 0);
        break;
    }
    myGLCD.fillRect(40+(i*20), 30+(i*20), 100+(i*20), 90+(i*20));
  }
  delay(2000);

  // устанавливаем чёрный цвет «чернил» для печати и рисования
  myGLCD.setColor(0, 0, 0);
  // вывод закрашенного прямоугольника
  myGLCD.fillRect(1, 1, 240, 320);

  // выводим 5 прямоугольников разными цветами
  for (int i = 1; i < 6; i++) {
    switch (i) {
      case 1:
        myGLCD.setColor(255, 0, 255);
        break;
      case 2:
        myGLCD.setColor(255, 0, 0);
        break;
      case 3:
        myGLCD.setColor(0, 255, 0);
        break;
      case 4:
        myGLCD.setColor(0, 0, 255);
        break;
      case 5:
        myGLCD.setColor(255, 255, 0);
        break;
    }
    myGLCD.fillCircle(170-(i*20), 60+(i*20), 30);
  }
  delay(2000);
}


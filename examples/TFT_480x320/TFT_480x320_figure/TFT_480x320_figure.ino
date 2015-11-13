// библиотека для работы с дисплеем
#include <UTFT.h>
// создаём объект класса UTFT
// и передаём идентификатор модели дисплея и номера управляющих пинов
UTFT myGLCD(CTE32HR, 38, 39, 40, 41);
void setup()
{
  // инициализируем дисплей с вертикальной ориентацией
  myGLCD.InitLCD();
  // очищаем экран
  myGLCD.clrScr();
}

void loop()
{
  // устанавливаем чёрный цвет «чернил» для печати и рисования
  myGLCD.setColor(0, 0, 0);
  // очищаем экран
  myGLCD.clrScr();

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
    myGLCD.fillRect(70+(i*20), 60+(i*20), 150+(i*20), 140+(i*20));
  }
  delay(2000);

  // устанавливаем чёрный цвет «чернил» для печати и рисования
  myGLCD.setColor(0, 0, 0);
  // очищаем экран
  myGLCD.clrScr();

  // выводим 5 окружностей разными цветами
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
    myGLCD.fillCircle(300-(i*20), 100+(i*20), 40);
  }
  delay(2000);
}

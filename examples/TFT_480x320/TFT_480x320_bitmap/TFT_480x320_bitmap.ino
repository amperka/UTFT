// библиотека для работы с дисплеем
#include <UTFT.h>

// создаём объект класса UTFT
// и передаём идентификатор модели дисплея и номера управляющих пинов
UTFT myGLCD(CTE32HR, 38, 39, 40, 41);

// объявления двух массив изображений
extern unsigned int amperka[0x1000];
extern unsigned int raspberry[0x1000];

void setup()
{
  // инициализируем дисплей с горизонтальной ориентацией
  myGLCD.InitLCD();
}

void loop()
{
  // закрашиваем дисплей белым цветом
  myGLCD.fillScr(255, 255, 255);
  // выводим изображение
  int x = 0;
  for (int s = 0; s < 3; s++) {
    x += (s*96);
    myGLCD.drawBitmap(x, 0, 64, 64, amperka, s+1);
  }
  x = 0;
  for (int s = 3; s > 0; s--) {
    myGLCD.drawBitmap(x, 320-(s*64), 64, 64, raspberry, s);
    x += (s*64);
  }
  
  delay(1000);
}

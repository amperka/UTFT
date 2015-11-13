// библиотека для работы с дисплеем
#include <UTFT.h>

// создаём объект класса UTFT
// и передаём идентификатор модели дисплея и номера пинов
// к которым подключаются линии SCK, SDI (MOSI), D/C, RESET, CS
UTFT myGLCD(TFT01_22SP, 9, 8, 12, 11, 10);

// объявления встроенного шрифта
extern uint8_t BigFont[];

// объявления двух массив изображений
extern unsigned int amperka[0x400];
extern unsigned int raspberry[0x400];

void setup()
{
  // инициализируем дисплей с горизонтальной ориентацией
  myGLCD.InitLCD();
}

void loop()
{
  // закрашиваем дисплей белым цветом
  myGLCD.fillScr(255, 255, 255);
  int x = 0;
  for (int s = 0; s < 4; s++) {
    x += (s*32);
    myGLCD.drawBitmap(x, 0, 32, 32, amperka, s+1);
  }
  x = 0;
  for (int s = 4; s > 0; s--) {
    myGLCD.drawBitmap(x, 224-(s*32), 32, 32, raspberry, s);
    x += (s*32);
  }
  
  delay(1000);
}

#include "Arduboy.h"
#include "letters.h"
Arduboy arduboy;


void drawBitmap(byte x, byte y, const uint8_t *bitmap, uint8_t frame) {
  unsigned int frame_offset;
  uint8_t width = pgm_read_byte(bitmap);
  uint8_t height = pgm_read_byte(++bitmap);

  bitmap++;
  if (frame > 0) {
    frame_offset = (width * ( height / 8 + ( height % 8 == 0 ? 0 : 1)));
    // sprite plus mask uses twice as much space for each frame
    bitmap += frame * frame_offset;
  }
  arduboy.drawBitmap(x, y, bitmap, width, height, 1);
}


void setup() {
  // put your setup code here, to run once:
  arduboy.initRandomSeed();
  arduboy.beginNoLogo();

}

void loop() {
  // pause render until it's time for the next frame
  if (!(arduboy.nextFrame()))
    return;

  byte x = random(10, 120),
       y = random(5, 60);

  arduboy.clear();
//  for (byte r = 1; r < 12; r++) {
//
//      arduboy.fillCircle(x, y, r, 1);
//     
////      delay(10);
//  }

  
  for (byte i = 0; i < 26; i++) {
    byte xPos = (6 * i) + 2,
         yPos = 0;

    if (xPos > 122) {
      yPos = 10;
      xPos -= 128;
     
    }

//    unsigned char* letter = alphabet[i];
    drawBitmap(xPos,yPos, alphabet[0], 0);

  }

  arduboy.display();

}

#include "Arduboy.h"
#include "letters.h"
Arduboy arduboy;

char * alphabet[26];

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

  alphabet[0] = A;
  alphabet[1] = B;
  alphabet[2] = C;
  alphabet[3] = D;
  alphabet[4] = E;
  alphabet[5] = F;
  alphabet[6] = G;
  alphabet[7] = H;
  alphabet[8] = I;
  alphabet[9] = J;
  alphabet[10] = K;
  alphabet[11] = L;
  alphabet[12] = M;
  alphabet[13] = N;
  alphabet[14] = O;
  alphabet[15] = P;
  alphabet[16] = Q;
  alphabet[17] = R;
  alphabet[18] = S;
  alphabet[19] = T;
  alphabet[20] = U;
  alphabet[21] = V;
  alphabet[22] = W;
  alphabet[23] = X;
  alphabet[24] = Y;
  alphabet[25] = Z;
}

void loop() {
  // pause render until it's time for the next frame
  if (!(arduboy.nextFrame()))
    return;

  byte x = random(10, 120),
       y = random(5, 60);

  arduboy.clear();
  
  for (byte i = 0; i < 26; i++) {
    byte xPos = (6 * i) + 2,
         yPos = 0;

    if (xPos > 122) {
      yPos = 10;
      xPos -= 128;
     
    }

    drawBitmap(xPos,yPos, alphabet[i], 0);
  }

  arduboy.display();
}

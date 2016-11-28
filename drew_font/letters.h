#ifndef LETTERS_H
#define LETTERS_H

PROGMEM const unsigned char A[] = {
7, 6,
0x20, 0x38, 0x2E, 0x23, 0x27, 0x1C, 0x30
};

PROGMEM const unsigned char B[] = {
6, 6,
0x3F, 0x21, 0x21, 0x2D, 0x3F, 0x12
};

PROGMEM const unsigned char C[] = {
6, 6,
0x1E, 0x33, 0x21, 0x21, 0x21, 0x12
};

PROGMEM const unsigned char D[] = {
6, 6,
0x3F, 0x21, 0x21, 0x21, 0x33, 0x1E
};

PROGMEM const unsigned char E[] = {
5, 6,
0x3F, 0x21, 0x2D, 0x2D, 0x2D
};

PROGMEM const unsigned char F[] = {
5, 6,
0x3F, 0x01, 0x0D, 0x0D, 0x0D
};

PROGMEM const unsigned char G[] = {
5, 6,
0x1F, 0x21, 0x21, 0x29, 0x1A
};

PROGMEM const unsigned char H[] = {
5, 6,
0x3F, 0x0C, 0x0C, 0x00, 0x3F
};

PROGMEM const unsigned char I[] = {
6, 6,
0x21, 0x21, 0x3F, 0x3F, 0x21, 0x21
};

PROGMEM const unsigned char J[] = {
6, 6,
0x18, 0x30, 0x20, 0x20, 0x30, 0x1F
};

PROGMEM const unsigned char K[] = {
7, 6,
0x3F, 0x3F, 0x0C, 0x00, 0x1E, 0x33, 0x21
};

PROGMEM const unsigned char L[] = {
5, 6,
0x3F, 0x20, 0x20, 0x20, 0x20
};

PROGMEM const unsigned char M[] = {
8, 6,
0x3F, 0x03, 0x06, 0x18, 0x30, 0x0C, 0x06, 0x3F
};

PROGMEM const unsigned char N[] = {
7, 6,
0x3F, 0x3F, 0x03, 0x0E, 0x18, 0x30, 0x3F
};

PROGMEM const unsigned char O[] = {
6, 6,
0x1E, 0x33, 0x21, 0x21, 0x33, 0x1E

};

PROGMEM const unsigned char P[] = {
5, 6,
0x3F, 0x01, 0x09, 0x0D, 0x07

};

PROGMEM const unsigned char Q[] = {
7, 6,
0x1E, 0x33, 0x21, 0x21, 0x31, 0x3F, 0x2C

};

PROGMEM const unsigned char R[] = {
6, 6,
0x3F, 0x3F, 0x01, 0x09, 0x3D, 0x37

};

PROGMEM const unsigned char S[] = {
6, 6,
0x27, 0x25, 0x21, 0x21, 0x3D, 0x19

};

PROGMEM const unsigned char T[] = {
6, 6,
0x01, 0x01, 0x3F, 0x3F, 0x01, 0x01

};

PROGMEM const unsigned char U[] = {
6, 6,
0x1F, 0x30, 0x20, 0x20, 0x30, 0x1F

};

PROGMEM const unsigned char V[] = {
7, 6,
0x01, 0x07, 0x1C, 0x30, 0x1C, 0x07, 0x01

};

PROGMEM const unsigned char W[] = {
8, 6,
0x3F, 0x30, 0x18, 0x06, 0x03, 0x0C, 0x18, 0x3F

};

PROGMEM const unsigned char X[] = {
6, 6,
0x33, 0x1E, 0x00, 0x0C, 0x1E, 0x33

};

PROGMEM const unsigned char Y[] = {
5, 6,
0x01, 0x06, 0x3C, 0x06, 0x01

};

PROGMEM const unsigned char Z[] = {
5, 6,
0x21, 0x31, 0x3D, 0x2F, 0x23

};

PROGMEM  const char * alphabet[] = {
//  A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z
//  {7, 6,    0x20, 0x38, 0x2E, 0x23, 0x27, 0x1C, 0x30},
//  {6, 6,    0x3F, 0x21, 0x21, 0x2D, 0x3F, 0x12},
//  {6, 6,    0x1E, 0x33, 0x21, 0x21, 0x21, 0x12},
//  {6, 6,    0x3F, 0x21, 0x21, 0x21, 0x33, 0x1E},
//  {5, 6,    0x3F, 0x21, 0x2D, 0x2D, 0x2D},
//  {5, 6,    0x3F, 0x01, 0x0D, 0x0D, 0x0D},
//  {5, 6,    0x1F, 0x21, 0x21, 0x29, 0x1A},
//  {5, 6,    0x3F, 0x0C, 0x0C, 0x00, 0x3F},
//  {6, 6,    0x21, 0x21, 0x3F, 0x3F, 0x21, 0x21},
//  {6, 6,    0x18, 0x30, 0x20, 0x20, 0x30, 0x1F},
//  {7, 6,    0x3F, 0x3F, 0x0C, 0x00, 0x1E, 0x33, 0x21},
//  {5, 6,    0x3F, 0x20, 0x20, 0x20, 0x20},
//  {8, 6,    0x3F, 0x03, 0x06, 0x18, 0x30, 0x0C, 0x06, 0x3F},
//  {7, 6,    0x3F, 0x3F, 0x03, 0x0E, 0x18, 0x30, 0x3F},
//  {6, 6,    0x1E, 0x33, 0x21, 0x21, 0x33, 0x1E},
//  {5, 6,    0x3F, 0x01, 0x09, 0x0D, 0x07},
//  {7, 6,    0x1E, 0x33, 0x21, 0x21, 0x31, 0x3F, 0x2C},
//  {6, 6,    0x3F, 0x3F, 0x01, 0x09, 0x3D, 0x37},
//  {6, 6,    0x27, 0x25, 0x21, 0x21, 0x3D, 0x19},
//  {6, 6,    0x01, 0x01, 0x3F, 0x3F, 0x01, 0x01},
//  {6, 6,    0x1F, 0x30, 0x20, 0x20, 0x30, 0x1F},
//  {7, 6,    0x01, 0x07, 0x1C, 0x30, 0x1C, 0x07, 0x01},
//  {8, 6,    0x3F, 0x30, 0x18, 0x06, 0x03, 0x0C, 0x18, 0x3F},
//  {6, 6,    0x33, 0x1E, 0x00, 0x0C, 0x1E, 0x33},
//  {5, 6,    0x01, 0x06, 0x3C, 0x06, 0x01},
//  {5, 6,    0x21, 0x31, 0x3D, 0x2F, 0x23}
};

#endif


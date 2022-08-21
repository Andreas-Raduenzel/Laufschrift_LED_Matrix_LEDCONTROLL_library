#include "LedControl.h"
LedControl lc884=LedControl(0,2,1,4);
//https://wolles-elektronikkiste.de/led-matrix-display-ansteuern
unsigned long delayTime=280;

byte A[8]={B00110000,B01111000,B11001100,B11001100,B11111100,B11001100,B11001100,B00000000}; // A
byte B[8]={B11111100,B01100110,B01100110,B01111100,B01100110,B01100110,B11111100,B00000000}; // B
byte C[8]={B00111100,B01100110,B11000000,B11000000,B11000000,B01100110,B00111100,B00000000}; // C
byte D[8]={B11111000,B01101100,B01100110,B01100110,B01100110,B01101100,B11111000,B00000000}; // D
byte E[8]={B11111110,B01100010,B01101000,B01111000,B01101000,B01100010,B11111110,B00000000}; // E
byte F[8]={B11111110,B01100010,B01101000,B01111000,B01101000,B01100000,B11110000,B00000000}; // F
byte G[8]={B00111100,B01100110,B11000000,B11000000,B11001110,B01100110,B00111110,B00000000}; // G
byte H[8]={B11001100,B11001100,B11001100,B11111100,B11001100,B11001100,B11001100,B00000000}; // H
byte I[8]={B01111000,B00110000,B00110000,B00110000,B00110000,B00110000,B01111000,B00000000}; // I
byte J[8]={B00011110,B00001100,B00001100,B00001100,B11001100,B11001100,B01111000,B00000000}; // J
byte K[8]={B11110110,B01100110,B01101100,B01111000,B01101100,B01100110,B11110110,B00000000}; // K
byte L[8]={B11110000,B01100000,B01100000,B01100000,B01100010,B01100110,B11111110,B00000000}; // L
byte M[8]={B11000110,B11101110,B11111110,B11111110,B11010110,B11000110,B11000110,B00000000}; // M
byte N[8]={B11000110,B11100110,B11110110,B11011110,B11001110,B11000110,B11000110,B00000000}; // N
byte O[8]={B00111000,B01101100,B11000110,B11000110,B11000110,B01101100,B00111000,B00000000}; // O
byte P[8]={B11111100,B01100110,B01100110,B01111100,B01100000,B01100000,B11110000,B00000000}; // P
byte Q[8]={B01111000,B11001100,B11001100,B11001100,B11011100,B01111000,B00011100,B00000000}; // Q
byte R[8]={B11111100,B01100110,B01100110,B01111100,B01101100,B01100110,B11110110,B00000000}; // R
byte S[8]={B01111000,B11001100,B11100000,B01110000,B00011100,B11001100,B01111000,B00000000}; // S
byte T[8]={B11111100,B10110100,B00110000,B00110000,B00110000,B00110000,B01111000,B00000000}; // T
byte U[8]={B11001100,B11001100,B11001100,B11001100,B11001100,B11001100,B11111100,B00000000}; // U
byte V[8]={B11001100,B11001100,B11001100,B11001100,B11001100,B01111000,B00110000,B00000000}; // V
byte W[8]={B11000110,B11000110,B11000110,B11010110,B11111110,B11101110,B11000110,B00000000}; // W
byte X[8]={B11000110,B11000110,B01101100,B00111000,B00111000,B01101100,B11000110,B00000000}; // X
byte Y[8]={B11001100,B11001100,B11001100,B01111000,B00110000,B00110000,B01111000,B00000000}; // Y
byte Z[8]={B11111110,B11000110,B10001100,B00011000,B00110010,B01100110,B11111110,B00000000}; // Z

byte a[8]={B00000000,B00000000,B01111000,B00001100,B01111100,B11001100,B01110110,B00000000}; // a
byte b[8]={B11100000,B01100000,B01100000,B01111100,B01100110,B01100110,B11011100,B00000000}; // b
byte c[8]={B00000000,B00000000,B01111000,B11001100,B11000000,B11001100,B01111000,B00000000}; // c
byte d[8]={B00011100,B00001100,B00001100,B01111100,B11001100,B11001100,B01110110,B00000000}; // d
byte e[8]={B00000000,B00000000,B01111000,B11001100,B11111100,B11000000,B01111000,B00000000}; // e
byte f[8]={B00111000,B01101100,B01100000,B11110000,B01100000,B01100000,B11110000,B00000000}; // f
byte g[8]={B00000000,B00000000,B01110110,B11001100,B11001100,B01111100,B00001100,B11111000}; // g
byte h[8]={B11100000,B01100000,B01101100,B01110110,B01100110,B01100110,B11100110,B00000000}; // h
byte i[8]={B00110000,B00000000,B01110000,B00110000,B00110000,B00110000,B01111000,B00000000}; // i
byte j[8]={B00001100,B00000000,B00001100,B00001100,B00001100,B11001100,B11001100,B01111000}; // j
byte k[8]={B11100000,B01100000,B01100110,B01101100,B01111000,B01101100,B11100110,B00000000}; // k
byte l[8]={B01110000,B00110000,B00110000,B00110000,B00110000,B00110000,B01111000,B00000000}; // l
byte m[8]={B00000000,B00000000,B11001100,B11111110,B11111110,B11010110,B11000110,B00000000}; // m
byte n[8]={B00000000,B00000000,B11111000,B11001100,B11001100,B11001100,B11001100,B00000000}; // n
byte o[8]={B00000000,B00000000,B01111000,B11001100,B11001100,B11001100,B01111000,B00000000}; // o
byte p[8]={B00000000,B00000000,B11011100,B01100110,B01100110,B01111100,B01100000,B11110000}; // p
byte q[8]={B00000000,B00000000,B01110110,B11001100,B11001100,B01111100,B00001100,B00011110}; // q
byte r[8]={B00000000,B00000000,B10011100,B01110110,B01100110,B01100000,B11110000,B00000000}; // r
byte s[8]={B00000000,B00000000,B01111100,B11000000,B01111000,B00001100,B11111000,B00000000}; // s
byte t[8]={B00010000,B00110000,B01111100,B00110000,B00110000,B00110100,B00011000,B00000000}; // t
byte u[8]={B00000000,B00000000,B11001100,B11001100,B11001100,B11001100,B01110110,B00000000}; // u
byte v[8]={B00000000,B00000000,B11001100,B11001100,B11001100,B01111000,B00110000,B00000000}; // v
byte w[8]={B00000000,B00000000,B11000110,B11000110,B11010110,B11111110,B01101100,B00000000}; // w
byte x[8]={B00000000,B00000000,B11000110,B01101100,B00111000,B01101100,B11000110,B00000000}; // x
byte y[8]={B00000000,B00000000,B11001100,B11001100,B11001100,B01111100,B00001100,B11111000}; // y
byte z[8]={B00000000,B00000000,B11111100,B10011000,B00110000,B01100100,B11111100,B00000000}; // z

byte zero[8]={B01111000,B11001100,B11011100,B11111100,B11101100,B11001100,B01111100,B00000000}; // 0
byte eins[8]={B00110000,B01110000,B00110000,B00110000,B00110000,B00110000,B11111100,B00000000}; // 1
byte zwei[8]={B01111000,B11001100,B00001100,B00111000,B01100000,B11001100,B11111100,B00000000}; // 2
byte drei[8]={B01111000,B11001100,B00001100,B00111000,B00001100,B11001100,B01111000,B00000000}; // 3
byte vier[8]={B00011100,B00111100,B01101100,B11001100,B11111110,B00001100,B00011110,B00000000}; // 4
byte fuenf[8]={B11111100,B11000000,B11111000,B00001100,B00001100,B11001100,B01111000,B00000000}; // 5
byte sechs[8]={B00111000,B01100000,B11000000,B11111000,B11001100,B11001100,B01111000,B00000000}; // 6
byte sieben[8]={B11111100,B11001100,B00001100,B00011000,B00110000,B00110000,B00110000,B00000000}; // 7
byte acht[8]={B01111000,B11001100,B11001100,B01111000,B11001100,B11001100,B01111000,B00000000}; // 8
byte neun[8]={B01111000,B11001100,B11001100,B01111100,B00001100,B00011000,B01110000,B00000000}; // 9

byte ausr[8]={B00110000,B01111000,B01111000,B00110000,B00110000,B00000000,B00110000,B00000000}; // !
byte raute[8]={B01101100,B01101100,B11111110,B01101100,B11111110,B01101100,B01101100,B00000000}; // #
byte dollar[8]={B00110000,B01111100,B11000000,B01111000,B00001100,B11111000,B00110000,B00000000}; // $
byte prozent[8]={B00000000,B11000110,B11001100,B00011000,B00110000,B01100110,B11000110,B00000000}; // %
byte und[8]={B00111000,B01101100,B00111000,B01110110,B11011100,B11001100,B01110110,B00000000}; // &
byte frag[8]={B01111000,B11001100,B00001100,B00011000,B00110000,B00000000,B00110000,B00000000}; // ?

byte frei[8]={B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000};

byte smile01[8]={B00111100,B01000010,B10010101,B10100001,B10100001,B10010101,B01000010,B00111100};
byte smile02[8]={B00111100,B01000010,B10010101,B10010001,B10010001,B10010101,B01000010,B00111100};
byte smile03[8]={B00111100,B01000010,B10100101,B10010001,B10010001,B10100101,B01000010,B00111100};



void setup() {
  for(int i=0;i<4;i++){
    lc884.shutdown(i,false);
    lc884.setIntensity(i,8);
    lc884.clearDisplay(i);
  }
}

void loop() { 
  oneMatrix();
  fourMatrices();
  delay(1000);
}

void oneMatrix(){
  displayCharAndWait(H,3);
  displayCharAndWait(a,3);
  displayCharAndWait(l,3);
  displayCharAndWait(l,3);
  displayCharAndWait(o,3);
  displayCharAndWait(smile01,3);
}

void displayCharAndWait(byte* x, byte displayNumber){
  lc884.clearDisplay(displayNumber);
  for(int j=0; j<=40;j++){
    lc884.setRow(displayNumber,j,x[j]);
  }
  delay(delayTime);
  lc884.clearDisplay(displayNumber); 
}


void fourMatrices(){
  for(int j=0; j<=40; j++){
    int currentMatrix = -1;
    /*if( ((currentMatrix+j)>=0) && ((currentMatrix+j)<4) ){
      displayChar(I,currentMatrix+j);
    }*/
     currentMatrix--;
    if( ((currentMatrix+j)>=0) && ((currentMatrix+j)<4) ){
      displayChar(I,currentMatrix+j);
    }
    currentMatrix--;
    if( ((currentMatrix+j)>=0) && ((currentMatrix+j)<4) ){
      displayChar(c,currentMatrix+j);
    }
    currentMatrix--;
    if( ((currentMatrix+j)>=0) && ((currentMatrix+j)<4) ){
      displayChar(h,currentMatrix+j);
    }
    currentMatrix--;
    if( ((currentMatrix+j)>=0) && ((currentMatrix+j)<4) ){
      displayChar(frei,currentMatrix+j);
    }
    currentMatrix--;
    if( ((currentMatrix+j)>=0) && ((currentMatrix+j)<4) ){
      displayChar(s,currentMatrix+j);
    }
    currentMatrix--;
    if( ((currentMatrix+j)>=0) && ((currentMatrix+j)<4) ){
      displayChar(c,currentMatrix+j);
    }
    currentMatrix--;
    if( ((currentMatrix+j)>=0) && ((currentMatrix+j)<4) ){
      displayChar(h,currentMatrix+j);
    }
    currentMatrix--;
    if( ((currentMatrix+j)>=0) && ((currentMatrix+j)<4) ){
      displayChar(a,currentMatrix+j);
    }
   currentMatrix--;
    if( ((currentMatrix+j)>=0) && ((currentMatrix+j)<4) ){
      displayChar(l,currentMatrix+j);
    }
       currentMatrix--;
    if( ((currentMatrix+j)>=0) && ((currentMatrix+j)<4) ){
      displayChar(t,currentMatrix+j);
    }
       currentMatrix--;
    if( ((currentMatrix+j)>=0) && ((currentMatrix+j)<4) ){
      displayChar(e,currentMatrix+j);
    }
    currentMatrix--;
    if( ((currentMatrix+j)>=0) && ((currentMatrix+j)<4) ){
      displayChar(frei,currentMatrix+j);
    }
       currentMatrix--;
    if( ((currentMatrix+j)>=0) && ((currentMatrix+j)<4) ){
      displayChar(m,currentMatrix+j);
    }
       currentMatrix--;
    if( ((currentMatrix+j)>=0) && ((currentMatrix+j)<4) ){
      displayChar(i,currentMatrix+j);
    }
       currentMatrix--;
    if( ((currentMatrix+j)>=0) && ((currentMatrix+j)<4) ){
      displayChar(c,currentMatrix+j);
    }
       currentMatrix--;
    if( ((currentMatrix+j)>=0) && ((currentMatrix+j)<4) ){
      displayChar(h,currentMatrix+j);
    }
    currentMatrix--;
    if( ((currentMatrix+j)>=0) && ((currentMatrix+j)<4) ){
      displayChar(frei,currentMatrix+j);
    }
       currentMatrix--;
    if( ((currentMatrix+j)>=0) && ((currentMatrix+j)<4) ){
      displayChar(a,currentMatrix+j);
    }
       currentMatrix--;
    if( ((currentMatrix+j)>=0) && ((currentMatrix+j)<4) ){
      displayChar(b,currentMatrix+j);
    }
    currentMatrix--;
    if( ((currentMatrix+j)>=0) && ((currentMatrix+j)<4) ){
      displayChar(frei,currentMatrix+j);
    }
    currentMatrix--;
    if( ((currentMatrix+j)>=0) && ((currentMatrix+j)<4) ){
      displayChar(u,currentMatrix+j);
    }
    currentMatrix--;
    if( ((currentMatrix+j)>=0) && ((currentMatrix+j)<4) ){
      displayChar(n,currentMatrix+j);
    }
    currentMatrix--;
    if( ((currentMatrix+j)>=0) && ((currentMatrix+j)<4) ){
      displayChar(d,currentMatrix+j);
    }
    currentMatrix--;
    if( ((currentMatrix+j)>=0) && ((currentMatrix+j)<4) ){
      displayChar(frei,currentMatrix+j);
    }
    currentMatrix--;
    if( ((currentMatrix+j)>=0) && ((currentMatrix+j)<4) ){
      displayChar(s,currentMatrix+j);
    }
    currentMatrix--;
    if( ((currentMatrix+j)>=0) && ((currentMatrix+j)<4) ){
      displayChar(u,currentMatrix+j);
    }
    currentMatrix--;
    if( ((currentMatrix+j)>=0) && ((currentMatrix+j)<4) ){
      displayChar(c,currentMatrix+j);
    }
    currentMatrix--;
    if( ((currentMatrix+j)>=0) && ((currentMatrix+j)<4) ){
      displayChar(h,currentMatrix+j);
    }
    currentMatrix--;
    if( ((currentMatrix+j)>=0) && ((currentMatrix+j)<4) ){
      displayChar(e,currentMatrix+j);
    }
    currentMatrix--;
    if( ((currentMatrix+j)>=0) && ((currentMatrix+j)<4) ){
      displayChar(frei,currentMatrix+j);
    }
    currentMatrix--;
    if( ((currentMatrix+j)>=0) && ((currentMatrix+j)<4) ){
      displayChar(d,currentMatrix+j);
    }
    currentMatrix--;
    if( ((currentMatrix+j)>=0) && ((currentMatrix+j)<4) ){
      displayChar(i,currentMatrix+j);
    }
    currentMatrix--;
    if( ((currentMatrix+j)>=0) && ((currentMatrix+j)<4) ){
      displayChar(e,currentMatrix+j);
    }
    currentMatrix--;
    if( ((currentMatrix+j)>=0) && ((currentMatrix+j)<4) ){
      displayChar(frei,currentMatrix+j);
    }
    currentMatrix--;
    if( ((currentMatrix+j)>=0) && ((currentMatrix+j)<4) ){
      displayChar(Z,currentMatrix+j);
    }
    currentMatrix--;
    if( ((currentMatrix+j)>=0) && ((currentMatrix+j)<4) ){
      displayChar(e,currentMatrix+j);
    }
    currentMatrix--;
    if( ((currentMatrix+j)>=0) && ((currentMatrix+j)<4) ){
      displayChar(i,currentMatrix+j);
    }
    currentMatrix--;
    if( ((currentMatrix+j)>=0) && ((currentMatrix+j)<4) ){
      displayChar(t,currentMatrix+j);
    }
    currentMatrix--;
    if( ((currentMatrix+j)>=0) && ((currentMatrix+j)<4) ){
      displayChar(smile01,currentMatrix+j);
    }
    delay(delayTime);
    for(int i=0; i<=4; i++){
      lc884.clearDisplay(i);
    }
  }  
}

void displayChar(byte *x, int displayNumber){
  lc884.clearDisplay(displayNumber);
  for(int j=0; j<=40;j++){
    lc884.setRow(displayNumber,j,x[j]);
  }
}

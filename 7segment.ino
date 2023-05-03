#include<SoftwareSerial.h>

int sega=2;
int segb=3;
int segc=4;
int segd=5;
int sege=6;
int segf=7;
int segg=8;


void setup() {
  // put your setup code here, to run once:
pinMode(sega,OUTPUT);
pinMode(segb,OUTPUT);
pinMode(segc,OUTPUT);
pinMode(segd,OUTPUT);
pinMode(sege,OUTPUT);
pinMode(segf,OUTPUT);
pinMode(segg,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(sega,HIGH);
digitalWrite(segb,HIGH);
digitalWrite(segc,HIGH);
digitalWrite(segd,HIGH);
digitalWrite(segg,HIGH);

}

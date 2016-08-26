#include <SoftwareSerial.h>
SoftwareSerial serial(6,7);
int c ;
void setup() {
serial.begin(9600);
Serial.begin(9600);
pinMode(A0,INPUT);
}

void loop() {
 c=analogRead(A0);
 serial.println(c);
 Serial.println(c);
 delay(100);

}

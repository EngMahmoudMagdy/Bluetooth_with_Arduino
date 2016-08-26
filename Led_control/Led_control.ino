#include <SoftwareSerial.h>
SoftwareSerial myserial(5,6);
int x = 12 ; 
void setup() {
 myserial.begin(9600);
 pinMode(x, OUTPUT); 
  myserial.write("Hello in Bluetooth");
}

void loop() {
 if (myserial.available())
 {

  if (myserial.read() == 'n' )
  {
    digitalWrite(x , HIGH);
    }
    else {
      digitalWrite(x , LOW) ; 
      }
  }

}

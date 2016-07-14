#include <SoftwareSerial.h>
SoftwareSerial myserial (5,6) ;// bluetooth : Tx = 5 , Rx = 6  

void setup() {
myserial.begin(9600); 
Serial.begin (9600) ;  

}

void loop() {
  if(myserial.available() )
  {
    Serial.write( myserial.read() ); 
    }
    if (Serial.available () )
    {
      myserial.write(Serial.read() );
      }

}

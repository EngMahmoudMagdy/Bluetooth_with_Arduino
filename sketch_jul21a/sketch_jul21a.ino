int Pin0 = 10;
int Pin1 = 11;
int Pin2 = 12;
int Pin3 = 13;
int _step = 0;
boolean dir = true;// gre
void setup()
{
pinMode(Pin0, OUTPUT);
pinMode(Pin1, OUTPUT);
Future Electronics Egypt Ltd. (Arduino Egypt).
pinMode(Pin2, OUTPUT);
pinMode(Pin3, OUTPUT);
}
void loop()
{
switch(_step){
case 0:
digitalWrite(Pin0, LOW);
digitalWrite(Pin1, LOW);
digitalWrite(Pin2, LOW);
digitalWrite(Pin3, HIGH);
break;
case 1:
digitalWrite(Pin0, LOW);
digitalWrite(Pin1, LOW);
digitalWrite(Pin2, HIGH);
digitalWrite(Pin3, HIGH);
break;
case 2:
digitalWrite(Pin0, LOW);
digitalWrite(Pin1, LOW);
digitalWrite(Pin2, HIGH);
digitalWrite(Pin3, LOW);
break;
case 3:
digitalWrite(Pin0, LOW);
digitalWrite(Pin1, HIGH);
digitalWrite(Pin2, HIGH);
digitalWrite(Pin3, LOW);
break;
case 4:
digitalWrite(Pin0, LOW);
digitalWrite(Pin1, HIGH);
digitalWrite(Pin2, LOW);
digitalWrite(Pin3, LOW);
break;
case 5:
digitalWrite(Pin0, HIGH);
digitalWrite(Pin1, HIGH);
digitalWrite(Pin2, LOW);
Future Electronics Egypt Ltd. (Arduino Egypt).
digitalWrite(Pin3, LOW);
break;
case 6:
digitalWrite(Pin0, HIGH);
digitalWrite(Pin1, LOW);
digitalWrite(Pin2, LOW);
digitalWrite(Pin3, LOW);
break;
case 7:
digitalWrite(Pin0, HIGH);
digitalWrite(Pin1, LOW);
digitalWrite(Pin2, LOW);
digitalWrite(Pin3, HIGH);
break;
default:
digitalWrite(Pin0, LOW);
digitalWrite(Pin1, LOW);
digitalWrite(Pin2, LOW);
digitalWrite(Pin3, LOW);
break;
}
for(int i = 0; i < 4 ; i++ )
{
_step++;
  }
  delay(1000);
  for(int i = 0; i < 4 ; i++ )
{
_step--;
  }

delay(1000);
}

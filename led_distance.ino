const int trig = 11;
const int echo = 13;

const int LED1 = 2;
const int LED2 = 3;
const int LED3 = 4;
const int LED4 = 5;
const int LED5 = 6;
const int LED6 = 7;
const int LED7 = 8;

int duration = 0;
int distance = 0;

void setup()
{
  pinMode(trig , OUTPUT);
  pinMode(echo , INPUT);
 
  pinMode(LED1 , OUTPUT);
  pinMode(LED2 , OUTPUT);
  pinMode(LED3 , OUTPUT);
  pinMode(LED4 , OUTPUT);
  pinMode(LED5 , OUTPUT);
  pinMode(LED6 , OUTPUT);
  pinMode(LED7 , OUTPUT);
 
  Serial.begin(9600);

}

void loop()
{
  digitalWrite(trig , HIGH);
  delayMicroseconds(1000);
  digitalWrite(trig , LOW);


  duration = pulseIn(echo , HIGH);
  distance = (duration/2) / 28.5 ;
  Serial.println(distance);
 

  if ( distance <= 6 )
  {
    digitalWrite(LED1, HIGH);
  }
  else
  {
    digitalWrite(LED1, LOW);
  }
  if ( distance <= 8 )
  {
    digitalWrite(LED2, HIGH);
  }
  else
  {
    digitalWrite(LED2, LOW);
  }
  if ( distance <= 10 )
  {
    digitalWrite(LED3, HIGH);
  }
  else
  {
    digitalWrite(LED3, LOW);
  }
  if ( distance <= 12 )
  {
    digitalWrite(LED4, HIGH);
  }
  else
  {
    digitalWrite(LED4, LOW);
  }
  if ( distance <= 6 )
  {
    digitalWrite(LED5, HIGH);
  }
  else
  {
    digitalWrite(LED5, LOW);
  }
  if ( distance <= 8 )
  {
    digitalWrite(LED6, HIGH);
  }
  else
  {
    digitalWrite(LED6, LOW);
  }
  if ( distance <= 14 )
  {
    digitalWrite(LED7, HIGH);
  }
  else
  {
    digitalWrite(LED7, LOW);
  }
}

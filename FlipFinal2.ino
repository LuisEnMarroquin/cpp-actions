

int ledPin1 = 1;
int ledPin2 = 2;

int buttonApin = 3;
int buttonBpin = 4;


byte leds = 0;

void setup() 
{
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);

  pinMode(buttonApin, INPUT_PULLUP);  
  pinMode(buttonBpin, INPUT_PULLUP);

}

void loop() 
{

  //0
  if (digitalRead(buttonApin) == HIGH && digitalRead(buttonBpin) == HIGH)
  {
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, HIGH);

  }
  
  //1
  if (digitalRead(buttonApin) == LOW && digitalRead(buttonBpin) == HIGH)
  {
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, LOW);

  }

  //2
  if (digitalRead(buttonApin) == HIGH && digitalRead(buttonBpin) == LOW)
  {
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, LOW);

  }

  //3
  if (digitalRead(buttonApin) == LOW && digitalRead(buttonBpin) == LOW)
  {
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, LOW);

  }
  
//delay(500); //Para hacer tiempo entre los cambios

}

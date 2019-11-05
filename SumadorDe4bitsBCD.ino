

int ledPin1 = 1;
int ledPin2 = 2;
int ledPin3 = 3;
int ledPin4 = 4;
int ledPin5 = 5;
int ledPin6 = 6;
int ledPin7 = 7;
int buttonApin = 8;
int buttonBpin = 9;
int buttonCpin = 10;
int buttonDpin = 11;

byte leds = 0;

void setup() 
{
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  pinMode(ledPin5, OUTPUT);
  pinMode(ledPin6, OUTPUT);
  pinMode(ledPin7, OUTPUT);
  pinMode(buttonApin, INPUT_PULLUP);  
  pinMode(buttonBpin, INPUT_PULLUP);
  pinMode(buttonCpin, INPUT_PULLUP);  
  pinMode(buttonDpin, INPUT_PULLUP);  
}

void loop() 
{

  //0
  if (digitalRead(buttonApin) == HIGH && digitalRead(buttonBpin) == HIGH)
  {
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, HIGH);
    digitalWrite(ledPin4, LOW);
    digitalWrite(ledPin5, HIGH);
    digitalWrite(ledPin6, HIGH);
    digitalWrite(ledPin7, HIGH);
  }
  
  //1
  if (digitalRead(buttonApin) == LOW && digitalRead(buttonBpin) == HIGH)
  {
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW);
    digitalWrite(ledPin4, LOW);
    digitalWrite(ledPin5, HIGH);
    digitalWrite(ledPin6, LOW);
    digitalWrite(ledPin7, LOW);
  }

  //2
  if (digitalRead(buttonApin) == HIGH && digitalRead(buttonBpin) == LOW)
  {
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, LOW);
    digitalWrite(ledPin4, HIGH);
    digitalWrite(ledPin5, LOW);
    digitalWrite(ledPin6, HIGH);
    digitalWrite(ledPin7, HIGH);
  }

  //3
  if (digitalRead(buttonApin) == LOW && digitalRead(buttonBpin) == LOW)
  {
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, LOW);
    digitalWrite(ledPin4, HIGH);
    digitalWrite(ledPin5, HIGH);
    digitalWrite(ledPin6, HIGH);
    digitalWrite(ledPin7, LOW);
  }

  //4
  if (digitalRead(buttonCpin) == LOW)
  {
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, HIGH);
    digitalWrite(ledPin4, HIGH);
    digitalWrite(ledPin5, HIGH);
    digitalWrite(ledPin6, LOW);
    digitalWrite(ledPin7, LOW);
  }

  //5
  if (digitalRead(buttonCpin) == LOW && digitalRead(buttonApin) == LOW)
  {
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, HIGH);
    digitalWrite(ledPin4, HIGH);
    digitalWrite(ledPin5, HIGH);
    digitalWrite(ledPin6, HIGH);
    digitalWrite(ledPin7, LOW);
  }

  //6
  if (digitalRead(buttonCpin) == LOW && digitalRead(buttonBpin) == LOW)
  {
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, HIGH);
    digitalWrite(ledPin4, HIGH);
    digitalWrite(ledPin5, HIGH);
    digitalWrite(ledPin6, HIGH);
    digitalWrite(ledPin7, HIGH);
  }

  //7
  if (digitalRead(buttonCpin) == LOW && digitalRead(buttonBpin) == LOW && digitalRead(buttonApin) == LOW)
  {
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, LOW);
    digitalWrite(ledPin4, LOW);
    digitalWrite(ledPin5, HIGH);
    digitalWrite(ledPin6, LOW);
    digitalWrite(ledPin7, LOW);
  }

  //8
  if (digitalRead(buttonDpin) == LOW && digitalRead(buttonApin) == HIGH)
  {
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, HIGH);
    digitalWrite(ledPin4, HIGH);
    digitalWrite(ledPin5, HIGH);
    digitalWrite(ledPin6, HIGH);
    digitalWrite(ledPin7, HIGH);
  }

  //9
  if (digitalRead(buttonDpin) == LOW && digitalRead(buttonApin) == LOW)
  {
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, HIGH);
    digitalWrite(ledPin4, HIGH);
    digitalWrite(ledPin5, HIGH);
    digitalWrite(ledPin6, HIGH);
    digitalWrite(ledPin7, LOW);
  }
  
//delay(500); //Para hacer tiempo entre los cambios

}

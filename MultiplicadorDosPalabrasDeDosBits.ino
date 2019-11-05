// Para display cátodo

// Salidas
int ledPin1 = 1;
int ledPin2 = 2;
int ledPin3 = 3;
int ledPin4 = 4;
int ledPin5 = 5;
int ledPin6 = 6;
int ledPin7 = 7;

// Entradas
int buttonApin = 8;
int buttonBpin = 9;
int buttonCpin = 10;
int buttonDpin = 11;

byte leds = 0;

void setup(){ // Definiendo entradas y salidas
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

void loop() { // HIGH = No Presionado // LOW = Presionado

  // 0 // 00 * 00
  if (digitalRead(buttonApin) == HIGH && digitalRead(buttonBpin) == HIGH && digitalRead(buttonCpin) == HIGH && digitalRead(buttonDpin) == HIGH)
  {
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, HIGH);
    digitalWrite(ledPin4, LOW);
    digitalWrite(ledPin5, HIGH);
    digitalWrite(ledPin6, HIGH);
    digitalWrite(ledPin7, HIGH);
  }

  // 0 // 00 * 01
  if (digitalRead(buttonApin) == HIGH && digitalRead(buttonBpin) == HIGH && digitalRead(buttonCpin) == HIGH && digitalRead(buttonDpin) == LOW)
  {
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, HIGH);
    digitalWrite(ledPin4, LOW);
    digitalWrite(ledPin5, HIGH);
    digitalWrite(ledPin6, HIGH);
    digitalWrite(ledPin7, HIGH);
  }

  // 0 // 00 * 10
  if (digitalRead(buttonApin) == HIGH && digitalRead(buttonBpin) == HIGH && digitalRead(buttonCpin) == LOW && digitalRead(buttonDpin) == HIGH)
  {
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, HIGH);
    digitalWrite(ledPin4, LOW);
    digitalWrite(ledPin5, HIGH);
    digitalWrite(ledPin6, HIGH);
    digitalWrite(ledPin7, HIGH);
  } 

  // 0 // 00 * 11
  if (digitalRead(buttonApin) == HIGH && digitalRead(buttonBpin) == HIGH && digitalRead(buttonCpin) == LOW && digitalRead(buttonDpin) == LOW)
  {
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, HIGH);
    digitalWrite(ledPin4, LOW);
    digitalWrite(ledPin5, HIGH);
    digitalWrite(ledPin6, HIGH);
    digitalWrite(ledPin7, HIGH);
  } 

  // 0 // 01 * 00
  if (digitalRead(buttonApin) == HIGH && digitalRead(buttonBpin) == LOW && digitalRead(buttonCpin) == HIGH && digitalRead(buttonDpin) == HIGH)
  {
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, HIGH);
    digitalWrite(ledPin4, LOW);
    digitalWrite(ledPin5, HIGH);
    digitalWrite(ledPin6, HIGH);
    digitalWrite(ledPin7, HIGH);
  } 

  // 1 // 01 * 01
  if (digitalRead(buttonApin) == HIGH && digitalRead(buttonBpin) == LOW && digitalRead(buttonCpin) == HIGH && digitalRead(buttonDpin) == LOW)
  {
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW);
    digitalWrite(ledPin4, LOW);
    digitalWrite(ledPin5, HIGH);
    digitalWrite(ledPin6, LOW);
    digitalWrite(ledPin7, LOW);
  } 

  // 1 // 01 * 10
  if (digitalRead(buttonApin) == HIGH && digitalRead(buttonBpin) == LOW && digitalRead(buttonCpin) == LOW && digitalRead(buttonDpin) == HIGH)
  {
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW);
    digitalWrite(ledPin4, LOW);
    digitalWrite(ledPin5, HIGH);
    digitalWrite(ledPin6, LOW);
    digitalWrite(ledPin7, LOW);
  } 

  // 3 // 01 * 11
  if (digitalRead(buttonApin) == HIGH && digitalRead(buttonBpin) == LOW && digitalRead(buttonCpin) == LOW && digitalRead(buttonDpin) == LOW)
  {
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, LOW);
    digitalWrite(ledPin4, HIGH);
    digitalWrite(ledPin5, HIGH);
    digitalWrite(ledPin6, HIGH);
    digitalWrite(ledPin7, LOW);
  } 

  // 0 // 10 * 00
  if (digitalRead(buttonApin) == LOW && digitalRead(buttonBpin) == HIGH && digitalRead(buttonCpin) == HIGH && digitalRead(buttonDpin) == HIGH)
  {
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, HIGH);
    digitalWrite(ledPin4, LOW);
    digitalWrite(ledPin5, HIGH);
    digitalWrite(ledPin6, HIGH);
    digitalWrite(ledPin7, HIGH);
  } 

  // 1 // 10 * 01
  if (digitalRead(buttonApin) == LOW && digitalRead(buttonBpin) == HIGH && digitalRead(buttonCpin) == HIGH && digitalRead(buttonDpin) == LOW)
  {
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW);
    digitalWrite(ledPin4, LOW);
    digitalWrite(ledPin5, HIGH);
    digitalWrite(ledPin6, LOW);
    digitalWrite(ledPin7, LOW);
  } 

  // 1 // 10 * 10
  if (digitalRead(buttonApin) == LOW && digitalRead(buttonBpin) == HIGH && digitalRead(buttonCpin) == LOW && digitalRead(buttonDpin) == HIGH)
  {
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW);
    digitalWrite(ledPin4, LOW);
    digitalWrite(ledPin5, HIGH);
    digitalWrite(ledPin6, LOW);
    digitalWrite(ledPin7, LOW);
  } 

  // 3 // 10 * 11
  if (digitalRead(buttonApin) == LOW && digitalRead(buttonBpin) == HIGH && digitalRead(buttonCpin) == LOW && digitalRead(buttonDpin) == LOW)
  {
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, LOW);
    digitalWrite(ledPin4, HIGH);
    digitalWrite(ledPin5, HIGH);
    digitalWrite(ledPin6, HIGH);
    digitalWrite(ledPin7, LOW);
  } 

  // 0 // 11 * 00
  if (digitalRead(buttonApin) == LOW && digitalRead(buttonBpin) == LOW && digitalRead(buttonCpin) == HIGH && digitalRead(buttonDpin) == HIGH)
  {
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, HIGH);
    digitalWrite(ledPin4, LOW);
    digitalWrite(ledPin5, HIGH);
    digitalWrite(ledPin6, HIGH);
    digitalWrite(ledPin7, HIGH);
  } 

  // 3 // 11 * 01
  if (digitalRead(buttonApin) == LOW && digitalRead(buttonBpin) == LOW && digitalRead(buttonCpin) == HIGH && digitalRead(buttonDpin) == LOW)
  {
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, LOW);
    digitalWrite(ledPin4, HIGH);
    digitalWrite(ledPin5, HIGH);
    digitalWrite(ledPin6, HIGH);
    digitalWrite(ledPin7, LOW);
  } 

  // 3 // 11 * 10
  if (digitalRead(buttonApin) == LOW && digitalRead(buttonBpin) == LOW && digitalRead(buttonCpin) == LOW && digitalRead(buttonDpin) == HIGH)
  {
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, LOW);
    digitalWrite(ledPin4, HIGH);
    digitalWrite(ledPin5, HIGH);
    digitalWrite(ledPin6, HIGH);
    digitalWrite(ledPin7, LOW);
  } 

  // 9 // 11 * 11
  if (digitalRead(buttonApin) == LOW && digitalRead(buttonBpin) == LOW && digitalRead(buttonCpin) == LOW && digitalRead(buttonDpin) == LOW)
  {
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, HIGH);
    digitalWrite(ledPin4, HIGH);
    digitalWrite(ledPin5, HIGH);
    digitalWrite(ledPin6, HIGH);
    digitalWrite(ledPin7, LOW);
  } 
  
delay(500); // Para hacer tiempo entre los cambios

}

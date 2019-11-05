
// Salidas
int ledPin1 = 1;
int ledPin2 = 2;

// Entradas
int buttonApin = 8;
int buttonBpin = 9;
int buttonCpin = 10;

byte leds = 0;

void setup(){ // Definiendo entradas y salidas
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(buttonApin, INPUT_PULLUP);  
  pinMode(buttonBpin, INPUT_PULLUP);
  pinMode(buttonCpin, INPUT_PULLUP);  
}

void loop() { // HIGH = No Presionado // LOW = Presionado

  // 000 - 00
  if (digitalRead(buttonApin) == HIGH && digitalRead(buttonBpin) == HIGH && digitalRead(buttonCpin) == HIGH)
  {
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, LOW);
  }

  // 001 - 10
  if (digitalRead(buttonApin) == HIGH && digitalRead(buttonBpin) == HIGH && digitalRead(buttonCpin) == LOW)
  {
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, LOW);
  }

  // 010 - 10
  if (digitalRead(buttonApin) == HIGH && digitalRead(buttonBpin) == LOW && digitalRead(buttonCpin) == HIGH)
  {   
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, LOW);
  }

  // 011 - 01
  if (digitalRead(buttonApin) == HIGH && digitalRead(buttonBpin) == LOW && digitalRead(buttonCpin) == LOW)
  {   
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, HIGH);
  }

  // 100 - 10
  if (digitalRead(buttonApin) == LOW && digitalRead(buttonBpin) == HIGH && digitalRead(buttonCpin) == HIGH)
  {   
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, LOW);
  }

  // 101 - 10
  if (digitalRead(buttonApin) == LOW && digitalRead(buttonBpin) == HIGH && digitalRead(buttonCpin) == LOW)
  {   
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, LOW);
  }

  // 110 - 01
  if (digitalRead(buttonApin) == LOW && digitalRead(buttonBpin) == LOW && digitalRead(buttonCpin) == HIGH)
  {   
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, HIGH);
  }

  // 111 - 11
  if (digitalRead(buttonApin) == LOW && digitalRead(buttonBpin) == LOW && digitalRead(buttonCpin) == LOW)
  {   
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, HIGH);
  }

  
delay(500); // Para hacer tiempo entre los cambios

}

// Flip Flop RS

// Salidas
int led1 = 1;
int led2 = 2;

// Entradas
int button1 = 3;
int button2 = 4;

byte leds = 0;

void setup(){ // Definiendo entradas y salidas
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(button1, INPUT_PULLUP);  
  pinMode(button2, INPUT_PULLUP);
}

void loop() {

  // 00 = 11
  if (digitalRead(button1) == HIGH && digitalRead(button2) == HIGH)
  {

    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    
  }

  // 01 = 10
  if (digitalRead(button1) == LOW && digitalRead(button2) == HIGH)
  {

    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    
  }

  // 10 = 01
  if (digitalRead(button1) == HIGH && digitalRead(button2) == LOW)
  {

    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
    
  }

  // 11 = Lo mismo que el estado anterior
  if (digitalRead(button1) == LOW && digitalRead(button2) == LOW)
  {
    // El condicional IF-ELSE se encarga de esta función
  }

}

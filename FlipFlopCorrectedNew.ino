// Flip Flop RS

// Salidas
int led1 = 1;
int led2 = 2;

// Entradas
int button1 = 3;
int button2 = 4;

void setup(){ // Definiendo entradas y salidas
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(button1, INPUT_PULLUP);  
  pinMode(button2, INPUT_PULLUP);
}

int E = 0;

void loop() {

  // 00
  if (digitalRead(button1) == HIGH && digitalRead(button2) == HIGH){
    
  }

  // 01
  if (digitalRead(button1) == LOW && digitalRead(button2) == HIGH){
    E = 1;
  }

  // 10
  if (digitalRead(button1) == HIGH && digitalRead(button2) == LOW){
    E = 0;
  }

  // 11
  if (digitalRead(button1) == LOW && digitalRead(button2) == LOW){
    
  }

  if( E == 0 ){
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
  }
  if( E == 1 ){
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
  }

}

// Flip Flop RS

// Salidas
int led1 = 1;
int led2 = 2;

// Entradas
int button1 = 3;
int button2 = 4;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(button1, INPUT_PULLUP);  
  pinMode(button2, INPUT_PULLUP);
  
}

int E = 0;
int Z = 0;

// the loop function runs over and over again forever
void loop() {

  

  if( E == 1 ){
    if( E == 1 ){
      E = 0;
    } else {
      E = 1;
    }
  } 
  
  if
  {

    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(button2, HIGH);
    
  }

  
  if( E == 1){

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(button1, INPUT_PULLUP);  
  pinMode(button2, OUTPUT);
  
  Z = 1;
    
  } 
    
   if( E == 1){
    digitalWrite(button2, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);                       // wait for a second
  digitalWrite(button2, LOW);    // turn the LED off by making the voltage LOW
  delay(500); 
   }
  
} 




#define button 8
#define Q 13
#define Q_ 3


boolean stat;

void setup(){
  
  pinMode(Q, OUTPUT);
  pinMode(Q_, OUTPUT);
  pinMode(button, INPUT);
}

void loop(){
  if (digitalRead(button) == true) {
    stat = ~stat;
    digitalWrite(Q, stat);
    digitalWrite(Q_, ~stat);
  }
  
  while(digitalRead(button) == true);;
  
  delay(100); // Delay of 0.1 seconds
  
}


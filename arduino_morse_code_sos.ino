int led1 = 13;

void setup() {
  pinMode (led1, OUTPUT);
}

void loop() {

  stip();

  streep();

  stip();

  pauze();
  
}

int stip() {
  for (int i = 0; i < 3; i++){
      
    digitalWrite(led1, HIGH);
    delay(200);
  
    digitalWrite(led1, LOW);
    delay(1000);
  }

}

int streep(){
  for (int i = 0;i < 3; i++){
    
    digitalWrite(led1, HIGH);
    delay(1000);
  
    digitalWrite(led1, LOW);
    delay(1000);
  }
  
}

int pauze(){
  digitalWrite(led1, LOW);
  delay(1500);
}

int ana = 0;

void setup() {
  // Port set at 9600 bps
  Serial.begin(9600);

}

void loop() {
  // analog input
  ana = analogRead(0);

  // print analog Value
  Serial.println(ana); 
  delay(300);
  clscn();
  home();
   
}

void clscn() {
  Serial.write(27);       // ESC command
  Serial.print("[2J");    // clear screen
}

void home(){
  Serial.write(27);
  Serial.print("[H");
}


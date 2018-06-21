int ana00 = 0;
int ana01 = 0;

void setup() {
  // Port set at 9600 bps
  Serial.begin(9600);

}

void loop() {
  // analog input
  ana00 = analogRead(0);
  ana01 = analogRead(1);

  // print analog Value
  Serial.print(ana00);
  Serial.write(27);
  Serial.print("[1;5H");
  Serial.print(ana01);
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


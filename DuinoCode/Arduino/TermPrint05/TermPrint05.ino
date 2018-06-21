int ana = 0;
int row = 1;
int col = 1;

void setup() {
  // Port set at 9600 bps
  Serial.begin(9600);

}

void loop() {
  col = 1;
  for(int i = 0; i < 6; i++){
    // analog input
    ana = analogRead(i);
    // print analog Value
    curpos(row,col);
    Serial.print(ana);
    col = col + 5; 
  }
  
  delay(400);
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

int curpos( int row,int col){
  
  Serial.write(27);
  Serial.print("[");
  Serial.print(row);
  Serial.print(";");
  Serial.print(col);
  Serial.print("H");
}


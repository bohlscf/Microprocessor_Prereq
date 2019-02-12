// This program blinks an external LED to SOS
int ledPin12 = 12;
int i = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin12, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (i % 9 >= 3 && i % 9 <= 5){
    digitalWrite(ledPin12, HIGH);
    delay(500);
    digitalWrite(ledPin12, LOW);
    delay(500);
  }
  else{
    digitalWrite(ledPin12, HIGH);
    delay(250);
    digitalWrite(ledPin12, LOW);
    delay(250);
    if(i % 9 == 8){
      delay(800);
    }
    if(i % 9 == 2){
      delay(250);
    }
  }
  i++;
}

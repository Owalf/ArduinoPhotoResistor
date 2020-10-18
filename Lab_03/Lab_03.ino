const int ledRED = 13;
const int ledBLUE = 12;
const int ledGREEN = 11;
const int photoResistor = A0;

void setup() {
  Serial.begin(9600);
  pinMode(ledRED, OUTPUT);
  pinMode(ledBLUE, OUTPUT);
  pinMode(ledGREEN, OUTPUT);
  pinMode(photoResistor, INPUT);
}
void loop() {
  int photoResistorStatus = analogRead(photoResistor);

  if(photoResistorStatus <= 300){
    digitalWrite(ledRED, HIGH);
    digitalWrite(ledBLUE, LOW);
    digitalWrite(ledGREEN, LOW);
    Serial.println("Very Dark, RED LED IS ON");
  }
  else if(photoResistorStatus <= 700){
    digitalWrite(ledBLUE, HIGH);
    digitalWrite(ledRED, LOW);
    digitalWrite(ledGREEN, LOW);
    Serial.println("A Little Dark, BLUE LED IS ON");
  }
  else{
    digitalWrite(ledGREEN, HIGH);
    digitalWrite(ledRED, LOW);
    digitalWrite(ledBLUE, LOW);
    Serial.println("Very Bright");
  }
}

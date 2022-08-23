char t;

void setup() {
  pinMode(13, OUTPUT);   //Inaintare motor stanga
  pinMode(12, OUTPUT);   //Marsarier motor stanga
  pinMode(11, OUTPUT);   //Inaintare motor dreapta
  pinMode(10, OUTPUT);   //Marsarier motor dreapta
  Serial.begin(9600);

}

void loop() {
  if (Serial.available()) {
    t = Serial.read();
    Serial.println(t);
  }
  switch (t)
  {
  case 'F': //INAINTARE
    digitalWrite(13, HIGH);
    digitalWrite(11, HIGH);
    break;
  case 'B': //MARSARIER
    digitalWrite(12, HIGH);
    digitalWrite(10, HIGH);
    break;
  case 'L': //STANGA
    digitalWrite(11, HIGH);
    break;
  case 'R': //DREAPTA
    digitalWrite(13, HIGH);
    break;
  case 'S': //OPRESTE TOATE MOTOARELE
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
    break;
  }
  delay(100);
}
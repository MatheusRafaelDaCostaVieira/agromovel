#define pino_Sensor A0

int ValAnalogIn;

void setup() {
  Serial.begin(9600);
}

void loop() {
  ValAnalogIn = analogRead(pino_Sensor);

  int Porcento = map(ValAnalogIn, 1023, 0, 0, 100);

  Serial.print(Porcento);
  Serial.println("%");

  delay (1000);
}

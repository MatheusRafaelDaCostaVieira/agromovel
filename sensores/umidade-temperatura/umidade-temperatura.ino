#include "DHT.h"

DHT dht(A1, DHT11);

void setup() {
  Serial.begin(9600);

  dht.begin();
}

void loop() {

  float h = dht.readHumidity();
  float t = dht.readTemperature();

  String H = String(h,0);
  String T = String(t,1);
  
  Serial.print("Umidade: ");
  Serial.print(H);
  Serial.print("%");
  Serial.print("\t");
  Serial.print("Temperatura: ");
  Serial.print(T);
  Serial.println("°C");
  
  delay(2000);
}
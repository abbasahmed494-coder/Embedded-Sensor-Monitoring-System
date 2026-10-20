#include "DHT.h"

#define DHT_PIN 2
#define DHT_TYPE DHT22
#define LED_PIN 13

DHT dht(DHT_PIN, DHT_TYPE);

const float TEMP_LIMIT_C = 30.0;

void setup() {
  Serial.begin(9600);

  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, LOW);

  dht.begin();

  Serial.println("Embedded Sensor Monitor Started");
}

void loop() {
  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();

  if(isnan(temperature) || isnan(humidity)) {
    Serial.println("ERROR: Sensor reading failed");
    digitalWrite(LED_PIN, LOW);
    delay(2000);
    return;
  }

  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.print(" C | Humidity: ");
  Serial.print(humidity);
  Serial.println(" %");

  if (temperature >= TEMP_LIMIT_C){
    digitalWrite(LED_PIN, HIGH);
    Serial.println("WARNING: High Temperature");
  }
  else{
    digitalWrite(LED_PIN, LOW);
  }

  delay(2000);

}

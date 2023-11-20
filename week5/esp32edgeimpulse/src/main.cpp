#include <Arduino.h>
#include <ArduinoJson.h>

//LIBRERIAS PARA DHT11 (TEMPERATURA Y HUMEDAD)
#include <Adafruit_Sensor.h>
#include <DHT.h>

//DEFINICION DE PINES DHT11 
#define DHTPIN 14  // 4 = PIN D4
#define DHTTYPE    DHT11 
DHT dht(DHTPIN, DHTTYPE);




void setup() {
// Initialize Serial Monitor
Serial.begin(9600);

}



void loop() {

//CODIGO----TEMPERATURA Y HUMEDAD---------------
  float h= dht.readHumidity();
  float t =dht.readTemperature();
  Serial.print(t);
  Serial.print(",");
  Serial.println(h);


  
  delay(333);// 3Hz
}



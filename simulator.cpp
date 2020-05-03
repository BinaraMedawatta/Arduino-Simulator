#include "driver.h"
//#include "ESP8266WiFi.h"

// define sensors here
const int sensePin = 0; // analog
int sensorInput;
double temp;

void setup(){	
	Serial.begin(9000);
	WiFi.begin("yourSSID", "yourPASS");   //WiFi connection
 
	while (WiFi.status() != "WL_CONNECTED") {  //Wait for the WiFI connection completion
    	delay(500);
    	Serial.println("Waiting for connection");
	}
	
}

void loop(){
	
	sensorInput = analogRead(sensePin);
	
	temp = (double)sensorInput / 1024;   //find percentage of input reading
	temp = temp * 5;                     //multiply by 5V to get voltage
	temp = temp - 0.5;                   //Subtract the offset 
	temp = temp * 100;                   //Convert to degrees 
	
	Serial.print("Current Temperature: ");
	Serial.println(temp);
	delay(1000);
//	delayMicroseconds(10);
	
	
}



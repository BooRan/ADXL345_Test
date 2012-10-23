
#define F_CPU 16000000
#define ARDUINO 100

#include "Arduino.h"
#include "Wire.cpp"
#include "ADXL345.cpp"

ADXL345 adxl;		// declare an instance of ADXLLib

/////////////////////////////////////////////////
/////////////////// VARIABLES ///////////////////
/////////////////////////////////////////////////

int x,y,z;
double values[3];

//////////////////////////////////////////////////
////////////////////// MAIN //////////////////////
//////////////////////////////////////////////////

void setup();
void loop();


/////////////////////////////////////////////////
/////////////////// FUNCTIONS ///////////////////
/////////////////////////////////////////////////

void setup() {
	  Serial.begin(9600);
	  adxl.powerOn();
}

void loop() {
	
	 
	 //adxl.readAccel(&x, &y, &z);		//read the accelerometer values and store them in variables  x,y,z
	adxl.get_Gxyz(values);
	 // Print Values to serial monitor
	 Serial.print(millis());
	 Serial.print(" ");
	 Serial.print(values[1]);
	 Serial.print(" (x), ");
	 Serial.print(values[2]);
	 Serial.print(" (y), ");
	 Serial.print(values[3]);
	 Serial.println(" (z)");
	 delay(100);

}
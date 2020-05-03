// meta.h
#include <bits/stdc++.h>
#include "network.h"

using namespace std;

class Meta{
	int baud;
	
	public :
		void begin(int value){ baud = value; }
		void print(int value){ cout << value; }
		void print(string value){ cout << value; }
		void print(double value){ cout << value; }
		void println(int value){ cout << value << endl;}
		void println(string value){ cout << value << endl; }
		void println(double value){ cout << value << endl; }
		
};

Meta Serial;

int HIGH, high = 1;
int LOW, low = 0;

int randomNumber(int upper=0, int lower=0){
	srand(time(NULL));
	return ((rand() % (upper - lower + 1)) + lower);
}

int analogRead(int pin){ return randomNumber(1023, 0); }
int digitalRead(int pin){ return randomNumber(1, 0); }

void delay(int value){ Sleep(value); }
void delayMicroseconds(int value){ Sleep(value*1000); }

void setup();
void loop();

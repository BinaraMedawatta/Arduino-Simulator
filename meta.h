// meta.h
#include <bits/stdc++.h>
#include "network.h"

using namespace std;

class Meta{
	int baud;
	
	public :
		begin(int value){ baud = value; }
		print(int value){ cout << value; }
		print(string value){ cout << value; }
		print(double value){ cout << value; }
		println(int value){ cout << value << endl;}
		println(string value){ cout << value << endl; }
		println(double value){ cout << value << endl; }
		
};

Meta Serial;

int HIGH, high = 1;
int LOW, low = 0;

int randomNumber(int upper=0, int lower=0){
	srand(time(NULL));
	return ((rand() % (upper - lower + 1)) + lower);
}

analogRead(int pin){ return randomNumber(1023, 0); }
digitalRead(int pin){ return randomNumber(1, 0); }

void delay(int value){ Sleep(value); }
void delayMicroseconds(int value){ Sleep(value*1000); }

void setup();
void loop();

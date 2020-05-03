// network
#include <bits/stdc++.h>
#include <windows.h>

using namespace std;

bool checkConnection(){
	if(system("ping www.google.com") == 0) {
    	cout << "Connected" << endl;
    	return true;
	}else{
	    cout << "Not Connected" << endl;
	    return false;
	}
}


//getReq(){
//	Cleanup myCleanup;
//
//	// Send request and get a result.
//	// Here I use a shortcut to get it in a string stream ...
//
//	ostringstream os;
//	os << Url(string("http://www.wikipedia.org"));
//
//	string asAskedInQuestion = os.str();
//	
//	cout << asAskedInQuestion;
//}


class network{
	string SSID;
	string Password;
	bool connected;
	public :
		void begin(string ssid, string pass){
			SSID = ssid;
			Password = pass;
			if(checkConnection()) connected = true;
			else connected = false;
		}
		string status(){
			if(checkConnection()) connected = true;
			else connected = false;
			return connected ? "WL_CONNECTED" : "0";
		}
};

network WiFi;

//http://dummy.restapiexample.com/api/v1/employees





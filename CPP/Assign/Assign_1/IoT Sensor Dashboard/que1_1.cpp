//============================================================================
// Name        : Assignment1.cpp
// Author      : Shravani
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	double temp;
	int statusCode;
	cout << "Enter the temperature: ";
	cin >> temp;
	float F = ((temp * 9 / 5) + 32);
	cout << "Temperature: " << temp<< "_C" << " / "  << F << "_f" << endl;


	if(temp<0){
		statusCode = -1;
	}
	else if(temp>0 && temp<29){
			statusCode = 0;
		}
	else if(temp>30 && temp<44){
			statusCode = 1;
		}
	else if(temp>45 && temp<49){
			statusCode = 2;
		}
	else {
			statusCode = 3;
		}

	switch(statusCode){
	case -1:
		cout << "Status: " << "Sensor_error" <<endl;
		cout << "Action: " << "Sensor fault--check wiring" <<endl;
	break;
	case 0:
		cout << "Status: " << "Normal" <<endl;
		cout << "Action: " << "No action required" <<endl;
	break;

	case 1:
		cout << "Status: " << "Warning" <<endl;
		cout << "Action: "<< "Alert sent to supervisor" <<endl;
	break;

	case 2:
		cout << "Status: " << "Critical" <<endl;
		cout << "Action: "<< "Cooling system triggered" <<endl;
	break;

	case 3:
		cout << "Status: " << "Shutdown" <<endl;
		cout << "Action: "<< "Emergency shutdown initiated" <<endl;
	break;
	}

	cout << "Reading: " << ((25 <= temp) ? "Above Avg" : "Below Avg") << endl;

	return 0;
}

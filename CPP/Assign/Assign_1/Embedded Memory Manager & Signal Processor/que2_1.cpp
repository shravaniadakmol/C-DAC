
#include <iostream>
using namespace std;

void resetSensorPairV1(int reading1, int reading2){
	int ext = reading1;
	reading1 = reading2;
	reading2 = ext;
}

void resetSensorPairV2(int& reading1, int& reading2){
	int ext = reading1;
	reading1 = reading2;
	reading2 = ext;
}

void resetSensorPairV3(int* reading1, int* reading2){
	int ext = *reading1;
	*reading1 = *reading2;
	*reading2 = ext;
}


int main() {

	int v1 = 69;
	int v2 = 96;

	cout << "--V1: Call by Value--" << endl;
	cout << "Before : " << "A = " <<  v1 << "  " << "B = " << v2 << endl;
	resetSensorPairV1(v1, v2);
	cout << "After  : " << "A = " <<  v1 << "  " << "B = " << v2 << "   <- values unchanged" << endl;
	cout << endl;


	cout << "--V2: Call by Reference--" << endl;
	cout << "Before : " << "A = " <<  v1 << "  " << "B = " << v2 << endl;
	resetSensorPairV2(v1, v2);
	cout << "After  : " << "A = " <<  v1 << "  " << "B = " << v2 << "   <- values swapped" <<  endl;
	cout << endl;


	cout << "--V1: Call by Pointer--" << endl;
	cout << "Before : " << "A = " <<  v1 << "  " << "B = " << v2 << endl;
	resetSensorPairV3(&v1, &v2);
	cout << "After  : " << "A = " <<  v1 << "  " << "B = " << v2 << "   <- values swapped back" <<  endl;
	cout << endl;

	return 0;
}

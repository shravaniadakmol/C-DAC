#include<iostream>
using namespace std;

int main(){

	int statusReg  = 0b10110001;
	int controlReg = 0b00000000;
	int dataReg    = 0b11001010;

//------------pointer to const int------------//

	const int* regPtr1= &statusReg;
	cout << "Status Register:  " << *regPtr1 << endl;

	//*regPtr1 = 50;
	//error: assignment of read-only location '* regPrt1'
	//because; points to a const value, so the value cannot be modified

	//regPtr1 = &dataReg;
	//WORKS.


//------------const pointer to int------------//

	int* const regPtr2= &controlReg;
	cout << "Control Register:  " << *regPtr2 << endl;

	//regPtr2 = &dataReg;
	//error: assignment of read-only variable 'regPtr2'
	//because; is a const pointer, so it cannot point to another address


//------------const pointer to const int------------//


	const int* const regPtr3 = &statusReg;
	   cout << "Status Register  " << *regPtr3 << endl;

	    //*regPtr3 = 50;
	    //error: assignment of read-only location '*(const int*)regPtr3'
		//because; points to a const value, so the value cannot be modified

	   //regPtr3 = &dataReg;
	   //error: assignment of read-only variable 'regPtr3'
	   //because; itself is a const pointer, so it cannot be reassigned


	return 0;
}





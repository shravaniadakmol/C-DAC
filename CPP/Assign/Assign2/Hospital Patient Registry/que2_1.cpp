//============================================================================
// Name        : Hospital.cpp
// Author      : Shravani
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include <iostream>
using namespace std;

class Patient {
private:
    int patientId;
    string name;
    int age;
    string ward;
    const string bloodGroup;

public:

    Patient()
        : patientId(0), name("Neha"), age(23), ward("general"), bloodGroup("O+")
    {
        cout << "Default Patient registered: " << endl;
    }

    Patient(int id, const string &name)
        : patientId(id), name(name), age(23), ward("Emergency"), bloodGroup("O+")
    {
        cout << "Emergency Constructor registered: " << endl;
    }

    Patient(int id, const string &name, int age, const string &ward, const string &bg)
        : patientId(id), name(name), age(age), ward(ward), bloodGroup(bg)
    {
        cout << "Full Admission Constructor: " << endl;
    }

    void displayRecord() const {
        cout << "Patient Record" << endl;
        cout << "PatientID: " << patientId << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Ward: " << ward << endl;
        cout << "BloodGroup: " << bloodGroup << endl;
        cout << endl;
    }

    void transferWard(const string &newWard) {
        cout << "ward Transfer: " << name << "-->" << newWard << endl;
        ward = newWard;
    }

    ~Patient() {
        cout << "Patient " << name << " Discharged" << endl;
    }
};

	int main() {
    Patient p1;

    Patient p2(101, "Shravani Adakmol");

    Patient p3(102, "Urvesh Patel", 23, "Biology", "B+");

    Patient *arr = new Patient[4];

    for (int i = 0; i < 4; i++) {
        arr[i].displayRecord();
    }

    p2.transferWard("ICU");

    delete[] arr;

    return 0;
}


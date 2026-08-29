#include <iostream>
#include <algorithm>

using namespace std;

int main(){

	double arr[3][3];

	cout << "Enter the elements: " ;

	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cin >> arr[i][j];
		}
	}

	cout << endl;
	cout << "         Room1   Room2   Room3" << endl;


	for(int i=0; i<3; i++){
		cout << "Floor"<< (i+1) << " :  " ;
		for(int j=0; j<3; j++){
			cout << arr[i][j] << "       ";
		}
		cout << endl;
	}

	cout << endl;

	int maxFloorRoom;
	int maxRoom;
	int hottestFloor;
	int warn = 0;
	double maxFloorAvg;

	double maxTemp = arr[0][0];


	for (int i = 0; i <= 2; i++) {
		double floorSum = 0;
	    for (int j = 0; j <= 2; j++) {
	    	double current = arr[i][j];
	        if (current > maxTemp) {
	            maxTemp = current;
	            maxFloorRoom = i + 1;
	            maxRoom = j + 1;
	        }
	        if (current >= 30.0){
	        	warn++;
	        }
	        floorSum+= current;
	    }
	    double floorAvg = floorSum / 3.0;
	    if (floorAvg > maxFloorAvg){
	    	maxFloorAvg = floorAvg;
	    	hottestFloor = i+1;
	    }
	}
    cout << "Hottest Room : Floor " << maxFloorRoom << ", Room" <<maxRoom << " -> " << maxTemp << "_C"<< endl ;
    cout << "Hottest Floor: Floor " << hottestFloor << "  (avg " << maxFloorAvg << "_C)" << endl;
    cout << "Rooms at Warning or above: " << warn << endl;

	return 0;

}




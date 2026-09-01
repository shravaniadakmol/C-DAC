
#include <iostream>
using namespace std;

int main(){

	int R, C;

	cout << "Enter number of rows: ";
	cin >> R;

	cout << "Enter number of columns: ";
	cin >> C;

	cout << endl;

	int** map = new int*[R];

	for(int i=0; i<R; i++){
		map[i] = new int[C];
	}



	for(int i=0; i<R; i++){
		for(int j=0; j<C; j++){
			map[i][j] = rand() % 5;
		}
	}



	for(int i=0; i<R; i++){
		for(int j=0; j<C; j++){
			cout << map[i][j] << " ";
		}
		cout << endl;
	}

	
	int count0=0, count1=0, count2=0, count3=0, count4=0;

	for(int i=0; i<R; i++){

		for(int j=0; j<C; j++){

			if(map[i][j] == 0)
				count0++;

			else if(map[i][j] == 1)
				count1++;

			else if(map[i][j] == 2)
					count2++;

			else if(map[i][j] == 3)
					count3++;

			else if(map[i][j] == 4)
					count4++;

		}
	}

	cout << "\nLegend::" << "  ";
	cout << "0=Grass" << "  ";
	cout << "1=Water" << "  ";
	cout << "2=Mountain" << "  ";
	cout << "3=Forest" << "  ";
	cout << "4=Dungeon" << endl;

	cout << "\nTile Counts::" << endl;
	cout << "Grass: " << count0 << endl;
	cout << "Water: " << count1 << endl;
	cout << "Mountain: " << count2 << endl;
	cout << "Forest: " << count3 << endl;
	cout << "Dungeon: " << count4 << endl;

	for(int i=0; i<R; i++){
		delete[] map[i];
	}

	delete[] map;

	return 0;
}


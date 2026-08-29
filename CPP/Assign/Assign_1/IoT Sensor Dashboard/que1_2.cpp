
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

	int N;
	float arr[100];

	int skip =0;

	int normal=0;
	int warning=0;
	int critical=0;
	int shutdown=0;

	cout << "Enter readings: " << endl;
	cin >> N;

	for (int i=0; i<N; i++){
		cin >> arr[i];
	}

	cout << "Valid readings: " ;


	for (int i=0; i<N; i++){
		if(arr[i] < 0){
			skip++;
			continue;
		}
		cout << arr[i] << " " ;
	}

	cout << endl;

	cout << "Skipped (errors) : " << skip << endl;


	for(int i=0; i < N; i++){
		if(arr[i]>=45){
			cout << "First Critical : Index " << i<< endl;
			break;
		}
	}


		float min = arr[0];
		float max = arr[0];
		float sum = 0;
		int count = 0;

		for(int i=0; i<N ; i++){
			if(arr[i] < 0){
				continue;
			}
			min = std::min(min, arr[i]);
			max = std::max(max, arr[i]);

			sum = sum + arr[i];
			count++;
		}

	float avg = sum / count;

	cout << "Min : " << min << "_C " << "   " << "Max : " << max << "_C " << "   " << "Avg : " << avg << "_C " << endl;


	  for(int i = 0; i < N; i++)
	    {
	        if(arr[i] < 0)
	        {
	            continue;
	        }

	        if(arr[i] <= 29)
	        {
	            normal++;
	        }
	        else if(arr[i] <= 44)
	        {
	            warning++;
	        }
	        else if(arr[i] <= 59)
	        {
	            critical++;
	        }
	        else
	        {
	            shutdown++;
	        }
	    }



	    cout << "Normal: " << normal << "   "  <<  "Warning: " << warning << "   " << "Critical: " << critical << "   " << "Shutdown: " << shutdown << endl;

	    return 0;
}




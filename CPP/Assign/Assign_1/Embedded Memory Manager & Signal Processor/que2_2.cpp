#include <iostream>
using namespace std;
#include <cmath>

double computeRMS(double *signal, int n){

    double sum = 0;
    double *ptr = signal;

    for (int i = 0; i < n; i++){
    	sum += (*ptr) * (*ptr);
        ptr++;
    }

    double rms = sqrt(sum / n);

    return rms;
}

void normalise(double *signal, int n){

    double maxValue = fabs(*signal);
    for (int i = 0; i < n; i++){
        if (fabs(*(signal + i)) > maxValue){
            maxValue = fabs(*(signal + i));
        }
    }

    for (int i = 0; i < n; i++){
        *(signal + i) = *(signal + i) / maxValue;  // to normalize the values
    }
}


int countZeroCrossings(double *signal, int n){
    // count the number of zero crossings --> that is pair of positive and negative value. ex: 7 and -3
    // make use of *ptr and *(ptr + 1) for comparing
    // we can check if the signs are opposite by multiplying and checking if its value is < 0 .
    // if value < 0 --> negative else --> positive

    int count = 0;

    for (int i = 0; i < n - 1; i++){
        if (*(signal + i) * *(signal + i + 1) < 0){
            count++;
        }
    }

    return count;
}

void applyGain(double *signal, int n, double gainFactor){

    for (int i = 0; i < n; i++){
        *(signal + i) = *(signal + i) * gainFactor;
    }
}


int main(){

    double signal[7] = {0.5, -1.2, 0.8, -0.30, -0.9, 0.1};
    int n = 7;

    cout << "Print original array: " << endl;

    for (int i = 0; i < n; i++){
        cout << *(signal + i) << " ";
    }

    cout << endl;

    double rms = computeRMS(signal, n);
    cout << "RMS: " << rms << endl;

    normalise(signal, n);

    cout << "After normalise:" << endl;

    for (int i = 0; i < n; i++){
        cout << *(signal + i) << " ";
    }
    cout << endl;

    int crossings = countZeroCrossings(signal, n);
    cout << "Zero Crossings: " << crossings << endl;
    double gainFactor = 2;
    applyGain(signal, n, gainFactor);
    cout << "After gain:" << endl;
    for (int i = 0; i < n; i++){
        cout << *(signal + i) << " ";
    }
    cout << endl;

    return 0;
}


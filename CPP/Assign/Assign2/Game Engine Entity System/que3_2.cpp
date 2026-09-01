
#include <iostream>
using namespace std;


namespace Physics {
	double clamp(double value, double min, double max){
		if (value < min)
			return min;

		if (value > max)
			return max;

		return value;
	}

	double lerp(double start, double end, double t){
		return start + (end - start) * t;
	}
}

namespace GameMath {
	double clamp(double value, double min, double max){
		if (value < min)
			return min;

		if (value > max)
			return max;

		return value;
	}

	double lerp(double start, double end, double t){
		return start + (end - start) * t;
	}
}

int main(){

	cout << "Physics::clamp : "<< Physics::clamp(10.2, -10, 0) << endl;
	cout << "GameMath::clamp : " << GameMath::clamp(-100, 0, 100) << endl;

	cout << "Physics::lery : " << Physics::lerp(0, 100, 0.5) << endl;
	cout << "GameMath::lery : "<< GameMath::lerp(10, 20, 1.5) << endl;

	
	return 0;
}



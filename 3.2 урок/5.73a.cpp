//Самостоятельная работа 3 базовый № 5.73 (а)
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double area = 100.0;
	double yield = 20.0;
	double increase_area = 1.05;
	double increase_yield = 1.02;
	
	
	for (int i = 2; i <= 8; i++) {
		area *= (increase_area);
		yield *= (increase_yield);
		double total_yield = yield * area;
		cout << "Year " << i << " yield: " << total_yield << " centners" << endl;
	}
	
	return 0;
}

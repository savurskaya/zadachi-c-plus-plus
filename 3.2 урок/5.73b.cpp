//Самостоятельная работа 3 базовый № 5.73 (б)
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double area = 100; 
	double yield = 20; 
	for (int i = 1; i <= 7; i++) {
		area *= 1.05; 
		yield *= 1.02;
		if (i >= 4) { 
			cout << "Year " << i << ": Area = " << round(area) << " hectares, Yield = " << round(yield) << " centners/hectare" << endl;
		}
	}
	return 0;
}
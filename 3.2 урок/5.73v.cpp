//Самостоятельная работа 3 базовый № 5.73 (в)
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double area = 100.0;
	double yield = 20.0;
	double increase_area = 1.05;
	double increase_yield = 1.02;
	double total_for_6_year = 2000;
	
	for (int i = 2; i <= 6; i++) {
		area *= (increase_area);
		yield *= (increase_yield);
		double total_yield = yield * area;
		total_for_6_year += total_yield;
	}
	cout << "Yield for 6 years: " << total_for_6_year << endl;
	return 0;
}

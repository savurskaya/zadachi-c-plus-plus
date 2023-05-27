//Самостоятельная работа 3 базовый № 5.74
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	const double pi = 3.14159265358979323846;
	const double thickness = 0.5;                      
	const double inner_radius = 5.0;                                
	const int num_spheres = 12;                 
	
	double total_volume = 0.0;
	double radius = inner_radius;
	
	for (int i = 0; i < num_spheres; i++) {
		double volume = (4.0 / 3.0) * pi * pow(radius, 3);
		total_volume += volume;
		radius += thickness;
		}
	
	double total_volume_liters = total_volume / 1000.0;                    
	
	cout << "Total volume of " << num_spheres << " spheres: " << total_volume_liters << " liters" << endl;
	
	return 0;
}

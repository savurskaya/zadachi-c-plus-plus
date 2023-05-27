//Самостоятельная работа 3 базовый № 5.72 (б)

#include <iostream>
using namespace std;

int main() {
double distance = 10; 
double totalDistance = 10; 
for (int i = 2; i <= 7; i++) {
distance *= 1.1; 
totalDistance += distance; 
}
cout<< "The total distance covered in the first 7 days is "<< totalDistance<< " km."<< endl;
return 0;
}
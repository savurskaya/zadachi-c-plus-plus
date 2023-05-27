// Урок 1 продвинутая с/р задание 5

#include <iostream>
#include <math.h>

using namespace std;

int main() {
double H, U, g = 9.81; 
cout << "Введите высоту H и скорость U самолета: ";
cin >> H >> U;
double T = sqrt(2 * H / g); 
double S = U * T; 
cout << "Подлетное расстояние до объекта: " << S << endl;
return 0;
}

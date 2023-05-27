//сам работа 1 продвинут (15)


#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double m, a, u;
    cout << "Введите массу тела: ";
    cin >> m;
    cout << "Введите угол наклона плоскости (в градусах): ";
    cin >> a;
    cout << "Введите коэффициент трения тела о плоскость: ";
    cin >> u;

   a = a * M_PI / 180.0; 

   double F = tan(a) <= u ? 0 : m * (sin(a) - u*cos(a));
   
   cout << "Сила натяжения нити равна: "<< F <<" Н"<< endl;

return 0; 
}
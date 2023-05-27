// самостоятельная работа 2 продвинутый №13


#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    double alpha, a;
    cout << "Введите угол наклона плоскости (в градусах): ";
    cin >> alpha;
    cout << "Введите ускорение тела: ";
    cin >> a;

    double g = 9.81; 
    double sin_alpha = sin(alpha * M_PI / 180); 
    double cos_alpha = cos(alpha * M_PI / 180);
    double u = (g * sin_alpha - a) / (g * cos_alpha);

    cout << "Коэффициент трения: " << u << endl;

    return 0;
}
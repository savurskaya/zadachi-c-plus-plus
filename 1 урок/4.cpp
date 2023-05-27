//самостоятельная базовая 1, №4
#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    const double g = 9.81;
    double H, V, a, t; 
    double T, x, y; 
    cout << "Введите высоту обрыва (м): ";
    cin >> H;
    
    cout << "Введите начальную скорость камня (м/с): ";
    cin >> V;
    
    cout << "Введите угол броска (в градусах): ";
    cin >> a;
    a = a * M_PI / 180;
    cout << "Введите время полета камня (с): ";
    cin >> t;
    
    T = V * sin(a) / g * (1 + sqrt(1 + 2 * g * H / pow(V * sin(a), 2))); 
    x = V * t * cos(a);
    y = H + V * t * sin(a) - g * pow(t, 2) / 2; 
    
    (t > T) ? cout << "Камень упал на дно обрыва" << endl : cout << "Высота от дна обрыва: " << x << " м" << endl;
    cout << "Расстояние до края обрыва: " << y << " м" << endl;
    
    return 0;
}

//самостоятельная базовая 1, B30

#include <iostream>
using namespace std;

int main() {
    float a;
    cout << "Введите значение угла в радианах (0 < a < 2pi): ";
    cin >> a;

    float degrees = a * 180 / 3.14; 
    cout << "Значение угла в градусах: " << degrees << endl;

    return 0;
}
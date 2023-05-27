// Самостоятельная продвинутый 1, задача 1

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double V, T, a;
    const double g = 9.8; 
    cout << "Введите начальную скорость V: ";
    cin >> V;
    cout << "Введите время полета T: ";
    cin >> T;

    a = asin(g * T / (2 * V));

    a = a * 180 / M_PI;

    cout << "Угол броска: " << a << " градусов." << endl;

    return 0;
}


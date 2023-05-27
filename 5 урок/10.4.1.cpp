//Самостоятельная базовая 5, 10.4(1) 


#include <iostream>
using namespace std;

int main()
{
    int a, b, x, y;

    // вводим значения a и b
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    // вычисляем x и y, минимальные значения из a и 3b-2a-b
    if (a < 3*b) {
        x = a;
    } else {
        x = 3*b;
    }

    if (2*a-b < 26) {
        y = 2*a-b;
    } else {
        y = 26;
    }

    // находим минимальное значение z
    int z;
    if (x < y) {
        z = x;
    } else {
        z = y;
    }

    // выводим результат
    cout << "z = " << z << endl;

    return 0;
}

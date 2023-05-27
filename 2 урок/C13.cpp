//C13, 3 урок

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num;
    double value;
    cout << "Введите номер элемента (1-4): ";
    cin >> num;
    cout << "Введите значение: ";
    cin >> value;

    double a, c, h, S;
    switch(num) {
        case 1: 
            a = value;
            c = a * sqrt(2);
            h = c / 2;
            S = c * h / 2;
            break;
        case 2:
            c = value;
            a = c / sqrt(2);
            h = c / 2;
            S = c * h / 2;
            break;
        case 3:
            h = value;
            c = h * 2;
            a = c / sqrt(2);
            S = c * h / 2;
            break;
        case 4:
            S = value;
            c = sqrt( (2 * S) / h );
            h = c / 2;
            a = c / sqrt(2);
            break;
        default:
            cout << "Неверный номер элемента\n";
            return 1;
    }
    cout << "1. Катет a = " << a << endl;
    cout << "2. Гипотенуза c = " << c << endl;
    cout << "3. Высота h = " << h << endl;
    cout << "4. Площадь S = " << S << endl;

    return 0;
}
```
//C14, 2 урок


#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int num;
    double value;
    cout << "Введите номер элемента: ";
    cin >> num;
    cout << "Введите значение элемента: ";
    cin >> value;
    double a, R1, R2, S;
    switch(num) {
        case 1:
            a = value;
            R1 = a * sqrt(3)/6;
            R2 = 2 * R1;
            S = a * a * sqrt(3)/4;
            break;
        case 2:
            R1 = value;
            a = 2 * R1/sqrt(3);
            R2 = 2 * R1;
            S = a * a * sqrt(3)/4;
            break;
        case 3:
            R2 = value;
            R1 = R2/2;
            a = 2 * R1/sqrt(3);
            S = a * a * sqrt(3)/4;
            break;
        case 4:
            S = value;
            a = 2 * sqrt(S/sqrt(3));
            R1 = a * sqrt(3)/6;
            R2 = 2*R1;
            break;
        default:
            cout<<"Вы ввели неправильный номер элемента";
            return 0;
    }
    cout << "a = " << a << endl;
    cout << "R1 = " << R1 << endl;
    cout << "R2 = " << R2 << endl;
    cout << "S = " << S << endl;
    return 0;
}
```
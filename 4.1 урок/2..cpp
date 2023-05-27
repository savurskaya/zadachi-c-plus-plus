// сам раб прод 4 2

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a1, a2, a3, b1, b2, b3;
    cout << "Введите компоненты вектора a: ";
    cin >> a1 >> a2 >> a3;
    cout << "Введите компоненты вектора b: ";
    cin >> b1 >> b2 >> b3;

    double a_len = sqrt(a1*a1 + a2*a2 + a3*a3); // вычисляем длину вектора a
    double b_len = sqrt(b1*b1 + b2*b2 + b3*b3); // вычисляем длину вектора b

    double dot_product = a1*b1 + a2*b2 + a3*b3; // вычисляем скалярное произведение
    double cos_f = dot_product / (a_len * b_len); // вычисляем косинус угла f
    double f = acos(cos_f) * 180 / M_PI; // вычисляем угол в градусах

    cout << "Угол между векторами a и b: " << f << " градусов" << endl;

    return 0;
}

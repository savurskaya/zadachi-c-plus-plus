//Сам. раб. 1 базовый №41(ж)


#include <iostream>

using namespace std;

int main() {
    double a;
    cout << "Введите число a: ";
    cin >> a;

    double a2 = a * a;
    double a4 = a2 * a2;
    double a8 = a4 * a4;
    double a12 = a8 * a4;
    double a13 = a12 * a;

    cout << "a^13 = " << a13 << endl;

    return 0;
}
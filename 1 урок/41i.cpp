//Сам. раб. 1 базовый №41(и)


#include <iostream>
using namespace std;

int main() {
    double a;
    cout << "Введите число a: ";
    cin >> a;

    double a2 = a * a;
    double a4 = a2 * a2;
    double a8 = a4 * a4;
    double a16 = a8 * a8;
    double a20 = a16 * a4;
    double a21 = a20 * a;

    cout << "a^21 = " << a21 << endl;

    return 0;
}


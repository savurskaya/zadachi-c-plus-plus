//Сам. раб. 1 базовый №41(к)


#include <iostream>
using namespace std;

int main() {
    double a;
    cout << "Введите вещественное число a: ";
    cin >> a;
    double a14 = a * a * a * a * a * a * a * a * a * a * a * a * a * a;
    double a28 = a14 * a14;
    cout << "a^28 = " << a28 << endl;
    return 0;
}


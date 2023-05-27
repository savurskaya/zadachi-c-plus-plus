//Сам раб 1 базовый(42в)


#include <iostream>
using namespace std;
int main() {
    float a;
    cin >> a;
    float a2 = a * a;
    float a3 = a2 * a;
    float a4 = a2 * a2;
    float a5 = a4 * a;
    float a13 = a5 * a5 * a3;
    cout << a5 << "," << a13;
    return 0;
}
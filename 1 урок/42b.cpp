//Сам раб 1 базовый(42б)

#include <iostream>
using namespace std;
int main() {
    float a;
    cin >> a;
    float a2 = a * a;
    float a4 = a2 * a2;
    float a5 = a * a * a * a * a;
    float a10 = a5 * a5;
    float a20 = a10 * a10;
    cout << a4 << "," << a20;
    return 0;
}
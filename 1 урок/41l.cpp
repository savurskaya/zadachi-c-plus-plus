//Сам раб 1 базовый(41л)

#include <iostream>
using namespace std;
int main() {
    float a;
    cin >> a ;
    float a2 = a * a;
    float a4 = a2 * a2;
    float a8 = a4 * a4;
    float a16 = a8 * a8;
    float a32 = a16 * a16;
    float a64 = a32 * a32;
    cout << a64;
    return 0;
}
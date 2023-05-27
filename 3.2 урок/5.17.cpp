// сам.раб. 3 баз 5.17

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double t, y;
    for (int x = 4; x <= 28; x++) {
        t = x + 2;
        y = 2 * pow(t, 2) + 5.5 * t - 2;
        cout << "При x = " << x << ", y = " << y << endl;
    }
    return 0;
}
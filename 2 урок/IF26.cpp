//сам раб 2(if26)


#include <iostream>
#include <cmath>
using namespace std;
double f(double x) {
    if (x <= 0) {
        return -x;
    } else if (x < 2) {
        return pow(x, 2);
    } else {
        return 4;
    }
}
int main() {
    double x;
    cout << "Enter a real number: ";
    cin >> x;
    cout << "f(" << x << ") = " << f(x) << endl;
    return 0;
}

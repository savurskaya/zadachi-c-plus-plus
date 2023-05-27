//сам раб 2(if25)


#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Enter integer x: ";
    cin >> x;

    int f;
    if (x < -2 || x > 2) {
        f = 2 * x;
    } else {
        f = 3 * x;
    }

    cout << "f(x) = " << f << endl;
    return 0;
}


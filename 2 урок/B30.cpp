// сам. раб. 2 B30
#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if (a == b && b == c) {
        cout << "Треугольник со сторонами " << a << ", " << b << ", " << c << " является равносторонним" << endl;
    } else {
        cout << "Треугольник со сторонами " << a << ", " << b << ", " << c << " не является равносторонним" << endl;
    }

    return 0;
}
// сам раб 2 баз B31

#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter the sides of the triangle: ";
    cin >> a >> b >> c;
    if (a == b || a == c || b == c) {
        cout << "The triangle is isosceles." << endl;
    } else {
        cout << "The triangle is not isosceles." << endl;
    }
    return 0;
}

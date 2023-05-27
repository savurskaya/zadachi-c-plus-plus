// сам раб 2 баз B32

#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter the sides of the triangle: ";
    cin >> a >> b >> c;
    if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a) {

        cout << "The triangle is right-angled." << endl;

    } else {

        cout << "The triangle is not right-angled." << endl;

    }

    return 0;

}

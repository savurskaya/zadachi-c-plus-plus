// сам раб 2 баз B33

#include <iostream>

using namespace std;

int main() {

    int a, b, c;

    cout << "Enter the sides of the triangle: ";

    cin >> a >> b >> c;

    if (a + b > c && a + c > b && b + c > a) {

        cout << "The triangle exists." << endl;

    } else {

        cout << "The triangle does not exist." << endl;

    }

    return 0;

}

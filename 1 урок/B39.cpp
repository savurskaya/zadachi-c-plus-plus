// Урок 1 базовая c/р B39


#include <iostream>
#include <math.h>

using namespace std;

int main() {
double a, b, c;
cout << "Enter coefficients a, b, c: ";
cin >> a >> b >> c;

double discriminant = b * b - 4 * a * c;

if (discriminant < 0) {
    cout << "No real roots" << endl;
}
else {
    double x1 = (-b - sqrt(discriminant)) / (2 * a);
    double x2 = (-b + sqrt(discriminant)) / (2 * a);

    if (x1 < x2) {
        cout << "Roots: " << x1 << ", " << x2 << endl;
    }
    else {
        cout << "Roots: " << x2 << ", " << x1 << endl;
    }
}
return 0;
}
// сам раб прод 5 2

#include <iostream>
#include <cmath>
using namespace std;

const int LIMIT = 10; // граница ряда

double sin(double x) {
double sum = 0;
int sign = 1;
double term = x;
int fact = 1;
double power = x;
for(int i = 0; i < LIMIT; i++) {
    sum += sign * term;
    sign *= -1;
    power *= x*x;
    fact *= (2*i+2)*(2*i+3);
    term = power/fact;
}

return sum;
}

int main() {
cout << "Enter argument x in radians: ";
double x;
cin >> x;
cout << "sin(" << x << ") = " << sin(x) << endl;
return 0;
}

// сам раб 5 прод 3

#include <iostream>

#include <cmath>

using namespace std;

const int MAX_ITERATIONS = 10;

double cos(double x) {

    double result = 1;

    double term = 1; 

    for (int n = 1; n <= MAX_ITERATIONS; n++) {

        term *= -1 * x * x / ((2 * n - 1) * (2 * n));

        result += term;

    }

    return result;

}



int main() {

    double x;

    cout << "Enter x value: ";

    cin >> x;

    cout << "cos(" << x << ") = " << cos(x) << endl;

    return 0;

}


//Задание 20, 5 урок

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
double computeA(vector<double> x, vector<double> y) {
    double sumX = 0.0, sumY = 0.0, sumXY = 0.0, sumXX = 0.0;
    int n = x.size();
    for (int i = 0; i < n; ++i) {
        sumX += x[i];
        sumY += y[i];
        sumXY += x[i] * y[i];
        sumXX += x[i] * x[i];
    }
    double denom = (n * sumXX) - (sumX * sumX);
    if (denom == 0) {
        cerr << "Error: denominator is zero!" << endl;
        return NAN;
    }
    return ((n * sumXY) - (sumX * sumY)) / denom;
}

double computeB(vector<double> x, vector<double> y, double a) {
    double sumX = 0.0, sumY = 0.0;
    int n = x.size();
    for (int i = 0; i < n; ++i) {
        sumX += x[i];
        sumY += y[i];
    }
    return (sumY - (a * sumX)) / n;
}

int main() {
    vector<double> x = {1.0, 2.0, 3.0, 4.0, 5.0};
    vector<double> y = {2.0, 3.5, 5.0, 7.0, 10.0};

    double a = computeA(x, y);
    double b = computeB(x, y, a);

    cout << "Regression model: f(x) = " << a << "x + " << b << "/x" << endl;

    return 0;
}

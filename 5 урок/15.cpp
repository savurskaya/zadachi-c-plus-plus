//Самостоятельная работа 5 продвинутый № 15
#include <iostream>
#include <math.h>
using namespace std;


double derivative(double coeffs[], int n, double x) {
	double result = 0;
	for (int i = 1; i < n; i++) {
		result += i * coeffs[i] * pow(x, i-1);
	}
	return result;
}

int main() {
	int n;
	cout << "Enter the degree of the polynomial: ";
	cin >> n;
	
	double coeffs[n];
	cout << "Enter the coefficients of the polynomial: ";
	for (int i = 0; i < n; i++) {
		cin >> coeffs[i];
	}
	
	double x;
	cout << "Enter the value of x for which to compute the derivative: ";
	cin >> x;
	
	double result = derivative(coeffs, n, x);
	cout << "The value of the derivative at x = " << x << " is " << result << endl;
	
	return 0;
}


//Самостоятельная работа 4 базовый № 3.4
#include <iostream>
using namespace std;

int main() {
	const int n = 5;
	double a[n][n] = {{1, 2, 3, 4, 5},
	{6, 7, 8, 9, 10},
	{11, 12, 13, 14, 15},
	{16, 17, 18, 19, 20},
	{21, 22, 23, 24, 25}};
	double min = a[0][n-1]; 
	for (int i = 1; i < n; i++) {
		if (a[i][n-i-1] < min) {
		min = a[i][n-i-1];
		}
	}
cout << "The smallest element on the secondary diagonal is " << min << endl;
return 0;
}
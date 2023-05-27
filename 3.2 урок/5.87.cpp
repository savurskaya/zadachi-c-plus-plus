//Самостоятельная работа 3 базовый № 5.87
#include <iostream>

using namespace std;

int main() {
	int n = 10; 
	int sum = 0;
	
	for (int i = 1; i <= n; i++) {
		int term = 0; 
		for (int j = 1; j <= 2 * i - 1; j += 2) {
			term += j; 
		}
		sum += term;
	}
	
	cout << "The sum of squares from 1 to " << n << " is " << sum << endl;

	return 0;
}

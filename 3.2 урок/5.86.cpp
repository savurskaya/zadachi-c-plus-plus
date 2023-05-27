//Самостоятельная работа 3 базовый № 5.86
#include <iostream>

using namespace std;

int main() {
	int n;
	cout << "Enter a natural number: ";
	cin >> n;
	
	int sum = 0;
	for (int i = 1; i <= 2 * n - 1; i += 2) {
		sum += i;
		}
	
	cout << "The square of " << n << " is " << sum << endl;

return 0;
}

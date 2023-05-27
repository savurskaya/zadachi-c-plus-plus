//Самостоятельная работа 3 базовый W8
#include <iostream>

int main() {
	int n;
	std::cout << "Enter a positive integer: ";
	std::cin >> n;
	
	int k = 0;
	while (k * k <= n) {
		k++;
	}
	k--;
	
	std::cout << "The largest integer K such that K^2 <= N is: " << k << std::endl;

	return 0;
}


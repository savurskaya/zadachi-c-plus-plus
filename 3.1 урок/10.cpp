//Самостоятельная работа 3 продвинутая задача 10

#include <iostream>

#include <cmath>

int main() {

int upperLimit;

std::cout << "Enter the upper limit: ";

std::cin >> upperLimit;

double product = 1.0;

for (int n = 1; n <= upperLimit; n++) {

product *= pow(cos(2 * n + 1), 2);

}

std::cout << "Product: " << product << std::endl;

return 0;

}
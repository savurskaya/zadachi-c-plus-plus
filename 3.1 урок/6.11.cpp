//самостоятельная базовая 3, №6.11

#include <iostream>

void printNumbers(double a) {

double number = 1.0;

double increment = 2.0;

while (number < a) {

std::cout << number << " ";

number += 1.0 / increment;

increment++;

}

std::cout << std::endl;

}

int main() {

double a;

std::cout << "Введите значение a: ";

std::cin >> a;

std::cout << "Числа, не меньшие " << a << ": ";

printNumbers(a);

return 0;

}
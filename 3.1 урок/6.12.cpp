//самостоятельная базовая 3, №6.12

#include <iostream>

double findFirstNumberLessThanA(double a) {

double number = 1.0;

double increment = 2.0;

while (number >= a) {

number += 1.0 / increment;

increment++;

}

return number;

}

int main() {

double a;

std::cout << "Введите значение a: ";

std::cin >> a;

double firstNumber = findFirstNumberLessThanA(a);

std::cout << "Первое число меньше " << a << ": " << firstNumber << std::endl;

return 0;

}
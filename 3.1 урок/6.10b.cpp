//самостоятельная базовая 3, №6.10(б)

#include <iostream>

#include <cmath>

int findFirstSquareGreaterThanN(int n) {

int number = 1;

while (number * number <= n) {

number++;

}

return number;

}

int main() {

int n;

std::cout << "Введите значение n: ";

std::cin >> n;

int firstNumber = findFirstSquareGreaterThanN(n);

std::cout << "Первое натуральное число, квадрат которого больше " << n << ": " << firstNumber << std::endl;

return 0;

}
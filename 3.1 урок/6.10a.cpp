//самостоятельная базовая 3, №6.10(а)

#include <iostream>

#include <cmath>

void printSquares(int n) {

int number = 1;

while (number * number <= n) {

std::cout << number * number << " ";

number++;

}

std::cout << std::endl;

}

int main() {

int n;

std::cout << "Введите значение n: ";

std::cin >> n;

std::cout << "Квадраты чисел, не превышающие " << n << ": ";

printSquares(n);

return 0;

}
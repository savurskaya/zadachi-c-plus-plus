//самостоятельная базовая 3, №6.8

#include <iostream>

#include <cmath>

void printNumbers(int n) {

int i = 1;

int square = 1;

while (square <= n) {

std::cout << square << " ";

i++;

square = i * i;

}

std::cout << std::endl;

}

int main() {

int n;

std::cout << "Введите значение n: ";

std::cin >> n;

std::cout << "Числа, не превышающие " << n << ": ";

printNumbers(n);

return 0;

}
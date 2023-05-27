//самостоятельная базовая 3, №6.9

#include <iostream>

#include <cmath>

int findFirstNumberGreaterThanN(int n) {

int i = 1;

int square = 1;

while (square <= n) {

i++;

square = i * i;

}

return square;

}

int main() {

int n;

std::cout << "Введите значение n: ";

std::cin >> n;

int firstNumber = findFirstNumberGreaterThanN(n);

std::cout << "Первое число больше " << n << ": " << firstNumber << std::endl;

return 0;

}
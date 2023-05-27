//самостоятельная базовая 3, № w6

#include <iostream>

double doubleFactorial(int N) {

double result = 1.0;

if (N % 2 == 0) {

for (int i = N; i >= 2; i -= 2) {

result *= i;

}

} else {

for (int i = N; i >= 1; i -= 2) {

result *= i;

}

}

return result;

}

int main() {

int N;

std::cout << "Введите значение N: ";

std::cin >> N;

double doubleFact = doubleFactorial(N);

std::cout << "Двойной факториал числа " << N << ": " << doubleFact << std::endl;

return 0;

}
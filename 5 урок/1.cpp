//сам раб 5 прод 1

#include <iostream>

int fibonacci(int n) {

if (n == 0) {

return 0;

} else if (n == 1) {

return 1;

} else {

return fibonacci(n-1) + fibonacci(n-2);

}

}

int main() {

int n;

std::cout << "Введите порядковый номер числа в последовательности Фибоначчи: ";

std::cin >> n;

std::cout << "Число Фибоначчи с порядковым номером " << n << " равно " << fibonacci(n) << std::endl;

return 0;

}
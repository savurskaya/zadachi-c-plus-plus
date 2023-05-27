// N17 сам раб 1 баз 
#include <iostream>

int main() {

int num;

std::cout << "Введите число больше 999: ";

std::cin >> num;

int hundreds_digit = (num / 100) % 10;

std::cout << "Цифра в разряде сотен: " << hundreds_digit << std::endl;

return 0;

}
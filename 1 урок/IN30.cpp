//самостоятельная базовая 1, №Integer 30

#include <iostream>

int calculateCentury(int year) {

int century = (year - 1) / 100 + 1;

return century;

}

int main() {

int year;

std::cout << "Введите номер года: ";

std::cin >> year;

int century = calculateCentury(year);

std::cout << "Номер столетия: " << century << std::endl;

return 0;

}
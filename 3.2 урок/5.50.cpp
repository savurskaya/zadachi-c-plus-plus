//Самостоятельная работа 3 базовая задача 5.50

#include <iostream>

int main() {

double a1, a2, a3, a4, a5, a6, a7, a8, a9, a10;

double sum, average;

std::cout << "Enter 10 numbers: ";

std::cin >> a1 >> a2 >> a3 >> a4 >> a5 >> a6 >> a7 >> a8 >> a9 >> a10;

sum = a1 + a2 + a3 + a4 + a5 + a6 + a7 + a8 + a9 + a10;

average = sum / 10;

std::cout << "Average: " << average << std::endl;

return 0;

}


//Самостоятельная работа 3 базовая задача 5.51

#include <iostream>

int main() {

int n;

double sum = 0, average;

std::cout << "Enter the count of numbers: ";

std::cin >> n;

std::cout << "Enter " << n << " numbers: ";

for (int i = 0; i < n; ++i) {

double num;

std::cin >> num;

sum += num;

}

average = sum / n;

std::cout << "Average: " << average << std::endl;

return 0;

}
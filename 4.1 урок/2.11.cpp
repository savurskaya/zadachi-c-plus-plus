//Самостоятельная работа 4 базовая задача 2.11

#include <iostream>

int main() {

const int size = 14;

int arr[size] = {3, -5, 8, -2, 7, -4, 6, 1, -9, 10, 2, -3, 4, -7};

int positiveEvenCount = 0;

int positiveEvenSum = 0;

for (int i = 0; i < size; i++) {

if (arr[i] > 0 && arr[i] % 2 == 0) {

positiveEvenCount++;

positiveEvenSum += arr[i];

}

}

std::cout << "Count of positive even elements: " << positiveEvenCount << std::endl;

std::cout << "Sum of positive even elements: " << positiveEvenSum << std::endl;

return 0;

}


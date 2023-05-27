//Самостоятельная работа 4 базовая задача 2.10

#include <iostream>

int main() {

const int size = 17;

int arr[size] = {5, -8, 3, -2, 9, -4, -7, 1, 6, -10, 2, 5, 3, -8, -7, 11, -6};

int negativeCount = 0;

int negativeSum = 0;

for (int i = 0; i < size; i++) {

if (arr[i] < 0) {

negativeCount++;

negativeSum += arr[i];

}

}

double negativeAverage = static_cast<double>(negativeSum) / negativeCount;

int absoluteSum = 0;

for (int i = 0; i < size; i++) {

if (std::abs(arr[i]) > negativeAverage) {

absoluteSum += arr[i];

}

}

std::cout << "Sum of elements with absolute value greater than the average of negative elements: " << absoluteSum << std::endl;

return 0;

}
//Самостоятельная работа 4 базовая задача 2.8

#include <iostream>

int main() {

const int size = 16;

float arr[size] = {2.5, 1.8, 3.2, 4.7, 2.1, 5.6, 1.3, 6.7, 2.9, 4.5, 3.7, 1.9, 5.2, 3.4, 2.6, 4.1};

int maxIndex = 0;

int minIndex = 0;

for (int i = 1; i < size; i++) {

if (arr[i] > arr[maxIndex]) {

maxIndex = i;

}

if (arr[i] < arr[minIndex]) {

minIndex = i;

}

}

std::cout << "Index of the maximum element: " << maxIndex << std::endl;

std::cout << "Index of the minimum element: " << minIndex << std::endl;

return 0;

}
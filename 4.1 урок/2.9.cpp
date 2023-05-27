//Самостоятельная работа 4 базовая задача 2.9

#include <iostream>

#include <vector>

std::vector<int> calculateDifference(const std::vector<int>& arr) {

std::vector<int> result;

int sum = 0;

int size = arr.size();

for (int i = 0; i < size; i++) {

sum += arr[i];

}

int average = sum / size;

for (int i = 0; i < size; i++) {

result.push_back(arr[i] - average);

}

return result;

}

int main() {

std::vector<int> arr = {5, 8, 3, 2, 9, 4, 7, 1, 6, 10, 2, 5, 3, 8, 7};

std::vector<int> diffArray = calculateDifference(arr);

std::cout << "Difference array: ";

for (int i = 0; i < diffArray.size(); i++) {

std::cout << diffArray[i] << " ";

}

std::cout << std::endl;

return 0;

}


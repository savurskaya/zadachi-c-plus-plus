//самостоятельная базовый 4, №3.11

#include <iostream>

void countEvenOddNumbers(int arr[][m], int n, int m, int& evenCount, int& oddCount) {

evenCount = 0;

oddCount = 0;

for (int i = 0; i < n; i++) {

for (int j = 0; j < m; j++) {

if (arr[i][j] % 2 == 0) {

evenCount++;

} else {

oddCount++;

}

}

}

}

int main() {

int n, m;

std::cout << "Введите количество строк: ";

std::cin >> n;

std::cout << "Введите количество столбцов: ";

std::cin >> m;

int arr[n][m];

std::cout << "Введите элементы массива:" << std::endl;

for (int i = 0; i < n; i++) {

for (int j = 0; j < m; j++) {

std::cin >> arr[i][j];

}

}

int evenCount, oddCount;

countEvenOddNumbers(arr, n, m, evenCount, oddCount);

std::cout << "Количество четных чисел: " << evenCount << std::endl;

std::cout << "Количество нечетных чисел: " << oddCount << std::endl;

return 0;

}
//самостоятельная базовый 4, №3.13

#include <iostream>

void findMaxInColumns(int arr[][m], int n, int m) {

for (int j = 0; j < m; j++) {

int maxElement = arr[0][j];

for (int i = 1; i < n; i++) {

if (arr[i][j] > maxElement) {

maxElement = arr[i][j];

}

}

std::cout << "Наибольший элемент в столбце " << j+1 << ": " << maxElement << std::endl;

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

findMaxInColumns(arr, n, m);

return 0;

}
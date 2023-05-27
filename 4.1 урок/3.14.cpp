//самостоятельная базовый 4, №3.14

#include <iostream>

#include <limits>

void findMinIndex(int arr[][m], int n, int m, int& rowIndex, int& colIndex) {

int minElement = std::numeric_limits<int>::max();

rowIndex = -1;

colIndex = -1;

for (int i = 0; i < n; i++) {

for (int j = 0; j < m; j++) {

if (arr[i][j] < minElement) {

minElement = arr[i][j];

rowIndex = i;

colIndex = j;

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

int rowIndex, colIndex;

findMinIndex(arr, n, m, rowIndex, colIndex);

if (rowIndex != -1 && colIndex != -1) {

std::cout << "Индексы первого наименьшего элемента: (" << rowIndex << ", " << colIndex << ")" << std::endl;

} else {

std::cout << "Массив пуст или некорректный размер" << std::endl;

}

return 0;

}


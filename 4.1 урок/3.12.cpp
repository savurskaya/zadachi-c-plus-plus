//самостоятельная базовый 4, №3.12

#include <iostream>

int countOccurrences(int arr[][m], int n, int m) {

int count = 0;

for (int i = 0; i < n; i++) {

for (int j = 0; j < m; j++) {

if (arr[i][j] == 7) {

count++;

}

}

}

return count;

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

int occurrences = countOccurrences(arr, n, m);

std::cout << "Число 7 встречается " << occurrences << " раз(а)" << std::endl;

return 0;

}
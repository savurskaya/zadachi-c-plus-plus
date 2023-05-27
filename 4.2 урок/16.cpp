// Самостоятельная базовый 4,  №16

#include <iostream>

int main() {
    const int n = 5; 
    int arr[n][n] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}, {16, 17, 18, 19, 20}, {21, 22, 23, 24, 25}}; // инициализация массива

    int product = 1;
    for (int i = 0; i < n; i++) {
        product *= arr[0][i];
    }

    std::cout << "Произведение элементов первой строки: " << product << std::endl;

    return 0;
}
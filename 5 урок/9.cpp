//Самостоятельная работа продвинутая задача 9

#include <iostream>

double calculateDotProduct(const double* vector1, const double* vector2, int size) {

double dotProduct = 0.0;

for (int i = 0; i < size; i++) {

dotProduct += vector1[i] * vector2[i];

}

return dotProduct;

}

int main() {

// Пример использования функции calculateDotProduct

// Вектор 1: [1, 2, 3]

double vector1[] = {1.0, 2.0, 3.0};

int size1 = sizeof(vector1) / sizeof(vector1[0]);

// Вектор 2: [4, 5, 6]

double vector2[] = {4.0, 5.0, 6.0};

int size2 = sizeof(vector2) / sizeof(vector2[0]);

// Вычисление скалярного произведения

double dotProduct = calculateDotProduct(vector1, vector2, std::min(size1, size2));

// Вывод результата

std::cout << "Скалярное произведение: " << dotProduct << std::endl;

return 0;

}
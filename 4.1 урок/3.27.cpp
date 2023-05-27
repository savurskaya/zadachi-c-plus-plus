// Урок 4 базовая с/р 3.27

#include <iostream>

using namespace std;

int main()
{
int rows, cols, sum = 0;
cout << "Введите количество строк матрицы: ";
cin >> rows;
cout << "Введите количество столбцов матрицы: ";
cin >> cols;
int matrix[rows][cols];
for(int i=0; i<rows; i++)
{
for(int j=0; j<cols; j++)
{
cout << "Введите элемент (" << i + 1 << ", " << j + 1 << "): ";
cin >> matrix[i][j];
if(matrix[i][j] % 2 != 0)
sum += matrix[i][j];
}
}
cout << "Сумма нечетных элементов матрицы: " << sum;
return 0;
}
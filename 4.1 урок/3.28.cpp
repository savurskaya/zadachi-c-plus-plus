// Урок 4 базовая с/р 3.28

#include <iostream>

using namespace std;

int main()
{
int matrix[5][5] = {{1, 2, 3, 4, 5},
{6, 7, 8, 9, 10},
{11, 12, 13, 14, 15},
{16, 17, 18, 19, 20},
{21, 22, 23, 24, 25}};

cout << "Исходная матрица:" << endl;
for (int i = 0; i < 5; i++)
{
    for (int j = 0; j < 5; j++)
    {
        cout << matrix[i][j] << " ";
    }
    cout << endl;
}

int temp[5];
for (int i = 0; i < 5; i++)
{
    temp[i] = matrix[3][i];
    matrix[3][i] = matrix[4][i];
    matrix[4][i] = temp[i];
}

cout << "Матрица после перестановки строк 4 и 5:" << endl;
for (int i = 0; i < 5; i++)
{
    for (int j = 0; j < 5; j++)
    {
        cout << matrix[i][j] << " ";
    }
    cout << endl;
}

return 0;
}

//сам раб 4 баз (4.19)

#include <iostream>

int main() {
    const int rows = 8;
    const int cols = 5;
    int matrix[rows][cols] = {
        {4, 2, 8, 4, 5},
        {6, 7, 8, 9, 10},
        {1, 2, 32, 24, 5},
        {6, 17, 1, 19, 20},
        {21, 22, 3, 24, 2},
        {26, 7, 18, 9, 30},
        {1, 32, 33, 34, 35},
        {0, 32, 8, 9, 20}
    };

    int sum_col_2 = 0;
    for (int i = 0; i < rows; i++) {
        sum_col_2 += matrix[i][1]; 
    }
    std::cout << "Сумма всех элементов второго столбца массива: " << sum_col_2 << std::endl;

    int sum_row_3 = 0;
    for (int j = 0; j < cols; j++) {
        sum_row_3 += matrix[2][j]; 
    }
    std::cout << "Сумма всех элементов третьей строки массива: " << sum_row_3 << std::endl;

    return 0;
}

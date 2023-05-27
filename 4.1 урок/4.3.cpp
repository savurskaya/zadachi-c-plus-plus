//4.3, урок 4

#include <iostream>

using namespace std;

int main() {
    const int rows = 4;
    const int cols = 4;
    int array[rows][cols];

    int num = 1;
    int startRow = 0, endRow = rows - 1, startCol = 0, endCol = cols - 1;

    while (num <= rows * cols) {
        for (int i = startCol; i <= endCol; i++) {
            array[startRow][i] = num++;
        }

        for (int i = startRow + 1; i <= endRow; i++) {
            array[i][endCol] = num++;
        }

        for (int i = endCol - 1; i >= startCol; i--) {
            array[endRow][i] = num++;
        }

        for (int i = endRow - 1; i >= startRow + 1; i--) {
            array[i][startCol] = num++;
        }

        startRow++; endRow--; startCol++; endCol--;
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%02d ", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}

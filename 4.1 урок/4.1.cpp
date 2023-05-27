//4.1, 4 урок

#include <iostream>

using namespace std;

const int ROWS = 3;
const int COLS = 4;

void sortRow(int row[], int start, int end) {
    for(int i = start; i < end; i++) {
        for(int j = start; j < end - 1; j++) {
            if(row[j] < row[j+1]) {
                int temp = row[j];
                row[j] = row[j+1];
                row[j+1] = temp;
            }
        }
    }
}

int main() {
    int matrix[ROWS][COLS];

    for(int i = 0; i < ROWS; i++) {
        cout << "Введите " << COLS << " элементов " << i+1 << "-й строки матрицы:" << endl;
        for(int j = 0; j < COLS; j++) {
            cin >> matrix[i][j];
        }
    }

    for(int i = 0; i < ROWS; i++) {
        int secondNegativeIndex = -1;
        for(int j = 0; j < COLS; j++) {
            if(matrix[i][j] < 0) {
                if(secondNegativeIndex == -1) {
                    secondNegativeIndex = j;
                } else {
                    sortRow(matrix[i], secondNegativeIndex+1, COLS);
                    break;
                }
            }
        }
    }

    cout << "Итоговая матрица:" << endl;
    for(int i = 0; i < ROWS; i++) {
        for(int j = 0; j < COLS; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
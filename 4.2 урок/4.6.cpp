//сам раб 4 баз 4.6
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int SIZE = 5; 

int main() {
    srand(time(NULL)); 
    int A[SIZE][SIZE];
    int B[SIZE-1][SIZE]; 
    int min_diag = INT_MAX;
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            A[i][j] = rand() % 10;
            cout << A[i][j] << " ";
            if (i == j && A[i][j] < min_diag) {
                min_diag = A[i][j];
            }
        }
        cout << endl;
    }

    cout << "Минимальный элемент главной диагонали: " << min_diag << endl;

    int row_to_remove = -1; 
    for (int i = 0; i < SIZE; i++) {
        if (A[i][i] == min_diag) {
            row_to_remove = i;
            break;
        }
    }

    if (row_to_remove == -1) {
        cout << "Минимальный элемент главной диагонали не найден." << endl;
        return 0;
    }

    cout << "Номер ряда, который нужно удалить: " << row_to_remove << endl;

   int b_row = 0;
    for (int i = 0; i < SIZE; i++) {
        if (i != row_to_remove) {
            for (int j = 0; j < SIZE; j++) {
                B[b_row][j] = A[i][j];
            }
            b_row++;
        }
    }

    cout << "Новая матрица:" << endl;
    for (int i = 0; i < SIZE-1; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
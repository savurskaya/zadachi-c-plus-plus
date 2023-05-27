//сам раб 4 баз (4.15)

#include <iostream>

using namespace std;

int main() {
    int B[5][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}, {16, 17, 18, 19, 20}, {21, 22, 23, 24, 25}};
    int sum = 0;
    for(int i = 0; i < 5; i++) {
        for(int j = i+1; j < 5; j++) {
            sum += B[i][j];
        }
    }
    cout << "Сумма элементов выше левой диагонали массива B составляет " << sum << endl;
    return 0;

//сам раб 4 баз (4.16)

#include <iostream>

using namespace std;

const int SIZE = 5;

int main() {
    int matrix[SIZE][SIZE] = {{1, -2, 3, -4, 5},
                              {6, 7, 8, 9, 10},
                              {11, 12, 13, 14, 15},
                              {16, 17, 18, 19, 20},
                              {21, 22, 23, 24, 25}};

    cout << "Original matrix:" << endl;
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    for (int j = 0; j < SIZE; j++) {
        if (matrix[0][j] < 0) {
            matrix[0][j] = 0;
        }
    }

    cout << "Modified matrix:" << endl;
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

//сам раб 4 баз (4.23)
#include <iostream>

using namespace std;

int main() {
    const int N = 3; 
    int matrix[N][N]; 


    cout << "Enter matrix elements:" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "Original matrix:" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    int min_count = N + 1; 
    int min_column = -1; 
    for (int j = 0; j < N; j++) {
        int count = 0; 
        for (int i = 0; i < N; i++) {
            if (matrix[i][j] % (i + j) == 0) {
                count++;
            }
        }

        if (count < min_count) {
            min_count = count;
            min_column = j;
        }
    }

    if (min_column == -1) {
        cout << "There is no column with elements that are multiples of the sum of indices." << endl;
    } else {
        cout << "Column with the smallest number of elements that are multiples of the sum of indices: " << min_column + 1 << endl;
    }

    return 0;
}


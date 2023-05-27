//сам раб 4 баз (4.30)


#include <iostream>

using namespace std;

int main() {
    const int N = 4; 
    const int M = 4; 

    int matrix[N][M]; 


    cout << "Enter matrix elements:" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> matrix[i][j];
        }
    }

    int max_count = 0; 
    int max_row = -1; 

    for (int i = 0; i < N; i++) {
        int count = 1; 
        for (int j = 0; j < M - 1; j++) {
            if (matrix[i][j] == matrix[i][j+1]) {
                count++;
            } else {
                if (count > max_count) {
                    max_count = count;
                    max_row = i;
                }
                count = 1;
            }
        }
        if (count > max_count) {
            max_count = count;
            max_row = i;
        }
    }

    if (max_row != -1) {
        cout << "The row with the maximum number of identical elements is " << max_row + 1 << endl;
    } else {
        cout << "There are no identical elements in the matrix" << endl;
    }

    return 0;
}


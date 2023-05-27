//сам раб 4 баз (4.22)


#include <iostream>

using namespace std;

int main() {
    const int N = 5; 

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

    for (int i = 0; i < N; i++) {
        int max_element = matrix[i][0]; 
        int max_index = 0; 
        for (int j = 1; j < N; j++) {
            if (matrix[i][j] > max_element) {
                max_element = matrix[i][j];
                max_index = j;
            }
        }

        int temp = matrix[i][i];
        matrix[i][i] = max_element;
        matrix[i][max_index] = temp;
    }

    cout << "Modified matrix:" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}


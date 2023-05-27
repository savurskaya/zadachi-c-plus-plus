//сам раб 4 баз (4.25)

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

    bool is_symmetric = true; 

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < i; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                is_symmetric = false;
                break;
            }
        }
        if (!is_symmetric) {
            break;
        }
    }

    if (is_symmetric) {
        cout << "The matrix is symmetric with respect to its main diagonal" << endl;
    } else {
        cout << "The matrix is not symmetric with respect to its main diagonal" << endl;
    }

    return 0;
}

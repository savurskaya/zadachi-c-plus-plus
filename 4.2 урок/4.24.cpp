//сам раб 4 баз (4.24)

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

    int sum = 0; 

    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            sum += matrix[i][j];
        }
    }

    cout << "Sum of elements above the main diagonal: " << sum << endl;

    return 0;
}
//сам раб 4 баз (4.29)

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

    int product = 1; 
    for (int i = 1; i < N; i++) {
        for (int j = 0; j < i; j++) {
            product *= matrix[i][j];
        }
    }

    cout << "The product of elements below the main diagonal is " << product << endl;

    return 0;
}

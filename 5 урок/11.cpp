//сам работа 5 продвинутый(11)


#include <iostream>
using namespace std;
double determinant(double matrix[][2]) {
    return matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
}
int main() {
    double matrix[2][2];
    cout << "Enter the values of the 2x2 matrix:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> matrix[i][j];
        }
    }
    cout << "\n The original matrix:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
    double det = determinant(matrix);
    cout << " Matrix determinant: " << det << endl;
    return 0;
}

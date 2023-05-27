//сам раб 4 баз (4.28)

#include <iostream>

using namespace std;

int main() {
    const int N = 5; 
    const int M = 4; 

    int matrix[N][M]; 

    cout << "Enter matrix elements:" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> matrix[i][j];
        }
    }

    int minCount = M; 
    int minIndex = -1; 

    for (int i = 0; i < N; i++) {
        int count = 1; 
        for (int j = 1; j < M; j++) {
            if (matrix[i][j] == matrix[i][j-1]) {
                count++;
            } else {
                count = 1;
            }
        }
        if (count < minCount) {
            minCount = count;
            minIndex = i;
        }
    }

    if (minIndex == -1) {
        cout << "All rows have the same number of elements" << endl;
    } else {
        cout << "Row " << minIndex << " has the minimum number of identical elements: " << minCount << endl;
    }

    return 0;
}

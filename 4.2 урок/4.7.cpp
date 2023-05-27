//сам раб 4 баз 4.7

#include <iostream>
using namespace std;

const int SIZE = 5; 

int main() {
    int A[SIZE][SIZE];
    int num = 1;

    
    for (int k = 0; k < SIZE/2; k++) {
        
        for (int j = k; j < SIZE-k-1; j++) {
            A[k][j] = num++;
        }
     
        for (int i = k; i < SIZE-k-1; i++) {
            A[i][SIZE-k-1] = num++;
        }
      
        for (int j = SIZE-k-1; j > k; j--) {
            A[SIZE-k-1][j] = num++;
        }
     
        for (int i = SIZE-k-1; i > k; i--) {
            A[i][k] = num++;
        }
    }

    if (SIZE % 2 == 1) {
        A[SIZE/2][SIZE/2] = num;
    }

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
//сам раб 4 баз 4.9
#include <iostream>
using namespace std;

const int M = 5; 
const int N = 4;

int main() {
    int A[M][N]; 
    int B[M];

  
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            A[i][j] = i * N + j;
        }
    }

  
    for (int i = 0; i < M; i++) {
        B[i] = i;
    }

  
    cout << "Исходный массив:" << endl;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Массив номеров строк:" << endl;
    for (int i = 0; i < M; i++) {
        cout << B[i] << " ";
    }
    cout << endl;

    return 0;
}
//сам раб 4 баз (4.10)

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int N, M, B;
    cout << "Введите количество строк матрицы: ";
    cin >> N;
    cout << "Введите количество столбцов матрицы: ";
    cin >> M;
    cout << "Введите число B: ";
    cin >> B;

    int A[N][M];
    int C[N * M]; 
    int count = 0; 

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            cout << "Введите элемент A[" << i << "][" << j << "]: ";
            cin >> A[i][j];
            if(abs(A[i][j]) > B) {
                C[count++] = A[i][j];
            }
        }
    }

    cout << "Количество элементов, превышающих по абсолютной величине число B: " << count << endl;
    cout << "Элементы, превышающие по абсолютной величине число B: ";
    for(int i = 0; i < count; i++) {
        cout << C[i] << " ";
    }

    return 0;
}


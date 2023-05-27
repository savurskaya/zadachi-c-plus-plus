//сам раб 4 баз (4.20)



#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(NULL)); 

    const int M = 5; 
    const int N = 6; 

    int matrix[M][N]; 
    int array[M*N]; 
    int counter = 0; 

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            matrix[i][j] = rand() % 100 + 1;
        }
    }

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            if (matrix[i][j] >= 1 && matrix[i][j] <= 20) {
                array[counter] = matrix[i][j];
                counter++;
            }
        }
    }

    cout << "Matrix:" << endl;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Array:" << endl;
    for (int i = 0; i < counter; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    double sum = 0;
    for (int i = 0; i < counter; i++) {
        sum += array[i];
    }
    double average = sum / counter;

    cout << "Average: " << average << endl;

    return 0;
}


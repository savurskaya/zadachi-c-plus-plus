//сам раб 4 баз 3.21

#include <iostream>
using namespace std;

int main() {
    int arr[4][6] = { {1,2,3,4,5,6},
                      {2,3,4,5,6,7},
                      {3,4,5,6,7,8},
                      {4,5,6,7,8,9} };
    int sum[6] = {0}; 
    for(int i=0; i<4; i++) {
        for(int j=0; j<6; j++) {
            sum[j] += arr[i][j];
        }
    }
    for(int j=0; j<6; j++) {
        cout << "Сумма столбца " << j+1 << ": " << sum[j] << endl;
    }
    return 0;
}


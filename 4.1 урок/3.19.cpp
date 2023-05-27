//сам раб 4 баз 3.19

#include <iostream>
using namespace std;

int main() {
    int arr[7][7] = { {1,2,3,4,5,6,7},
                      {2,3,4,5,6,7,8},
                      {3,4,5,6,7,8,9},
                      {4,5,6,7,8,9,10},
                      {5,6,7,8,9,10,11},
                      {6,7,8,9,10,11,12},
                      {7,8,9,10,11,12,13} };
    int minSum = INT_MAX; 
    int minIndex = -1; 
    for(int i=0; i<7; i++) {
        int sum = 0;
        for(int j=0; j<7; j++) {
            sum += arr[i][j];
        }
        if(sum < minSum) {
            minSum = sum;
            minIndex = i;
        }
    }
    cout << "Строка с наименьшей суммой элементов: ";
    for(int j=0; j<7; j++) {
        cout << arr[minIndex][j] << " ";
    }
    cout << endl;
    return 0;
}

//сам раб 4 баз 3.22


#include <iostream>
#include <climits> 
using namespace std;

int main() {
    int arr[5][10] = { {1,2,3,4,5,6,7,8,9,10},
                       {2,3,4,5,6,7,8,9,10,11},
                       {3,4,5,6,7,8,9,10,11,12},
                       {4,5,6,7,8,9,10,11,12,13},
                       {5,6,7,8,9,10,11,12,13,14} };
    int min_sum = INT_MAX;
    for(int i=0; i<5; i++) {
        int sum = 0; 
        for(int j=0; j<10; j++) {
            sum += arr[i][j];
        }
        if(sum < min_sum) {
            min_sum = sum;
        }
    }
    cout << "Минимальная сумма строк: " << min_sum << endl;
    return 0;
}
// 4 урок баз. 3.1
#include <iostream>
#include <algorithm> 
using namespace std;

int main() {
    int arr[3][4] = {{3, 2, 1, 4}, {8, 6, 7, 5}, {11, 10, 12, 9}};

    
    sort(arr[2], arr[2] + 4);

    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

//сам раб 4 баз 2.5
#include <iostream>
using namespace std;

int main() 
{ 
    int max_index = 0; 
    int min_index = 0; 

    for (int i = 0; i < 9; i++) {
        arr[i] = rand() % 100 + 1;
        cout << arr[i] << " ";
        if (arr[i] > arr[max_index]) {
            max_index = i;
        }
        if (arr[i] < arr[min_index]) {
            min_index = i;
        }
    }
    int temp = arr[min_index];
    arr[min_index] = arr[max_index];
    arr[max_index] = temp;

    cout << endl;

    for (int i = 0; i < 9; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

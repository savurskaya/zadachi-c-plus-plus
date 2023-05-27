//сам раб 4 баз 2.4
#include <iostream>
using namespace std;

int main() 
{
    int arr[10]; 
    int max_index = 0; 
   for (int i = 0; i < 10; i++) {
        arr[i] = rand() % 100 + 1;
        cout << arr[i] << " ";
        if (arr[i] > arr[max_index]) {
            max_index = i;
        }
    }

    int temp = arr[0];
    arr[0] = arr[max_index];
    arr[max_index] = temp;

    cout << endl;


    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

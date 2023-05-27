//сам работа 4 базовый(2.18)


#include <iostream>
using namespace std;
int main() {
    int arr[12];
    cout << "Insert 12 elements of array: ";
    for(int i=0; i<12; i++) {
        cin >> arr[i];
    }
    int min_val = arr[0], max_val = arr[0]; 
    for(int i=1; i<12; i++) { 
        if(arr[i] < min_val) min_val = arr[i];
        if(arr[i] > max_val) max_val = arr[i]; 
        }
    cout << "Minimum value: " << min_val << endl;
    cout << "Maximum value: " << max_val << endl;
    return 0;
}

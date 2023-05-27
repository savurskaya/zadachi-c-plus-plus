//сам работа 4 базовый(2.17)



#include <iostream>
using namespace std;
int main() {
    int arr[15], neg_count = 0, zero_count = 0, pos_prod = 1;
   
    cout << "Enter 15 integers:" << endl;
    for(int i = 0; i < 15; i++) {
        cin >> arr[i];
    }
    
    cout << "Array:";
    for(int i = 0; i < 15; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    for(int i = 0; i < 15; i++) {
        if(arr[i] < 0) {
            neg_count++;
        } else if(arr[i] == 0) {
            zero_count++;
        }
    }
    for(int i = 0; i < 15; i++) {
        if(arr[i] > 0) {
            pos_prod *= arr[i];
        }
    }
    cout << "The number of negative elements: " << neg_count << endl;
    cout << "Number of zero elements: " << zero_count << endl;
    cout << "The product of positive elements: " << pos_prod << endl;
    return 0;
}

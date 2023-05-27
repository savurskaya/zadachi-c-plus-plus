//сам работа 4 базовый(2.19)



#include <iostream>
using namespace std;
int main() {
    int arr[19];
    for (int i = 0; i < 19; i++) {
        cout << "Enter element " << i << ": ";
        cin >> arr[i];
    }
    int sum = 0;
    bool negative_found = false;
    for (int i = 0; i < 19; i++) {
        if (arr[i] < 0) {
            negative_found = true;
            break;
        }
        sum += arr[i];
    }
    if (negative_found) {
        cout << "The sum of the elements before the first negative element is: " << sum << endl;
    } else {
        cout << "There are no negative elements in the array" << endl;
    }
    return 0;
}

//сам работа 4 базовый(2.16)


#include <iostream>
using namespace std;
int main() {
    float arr[12];
    int i, max_index = 0, min_index = 0, count = 0;
    for (i = 0; i < 12; i++) {
        cout << "Input " << i+1 << "st Element: ";
        cin >> arr[i];
    }
    for (i = 1; i < 12; i++) {
        if (arr[max_index] < arr[i]) {
            max_index = i;
        } else if (arr[min_index] > arr[i]) {
            min_index = i;
        }
    }
    count = abs(max_index - min_index) - 1;
    cout << "Maximum element: " << arr[max_index] << endl;
    cout << "Minimum element: " << arr[min_index] << endl;
    cout << "The number of elements between the maximum and minimum:" << count << endl;
    return 0;
}
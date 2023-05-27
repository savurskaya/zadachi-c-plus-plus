//Сам. раб. 4 баз. №2.13

#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int arr[15]; 
    int max_val = INT_MIN; 
    int min_val = INT_MAX;
    cout << "Введите 15 целочисленных элементов массива:" << endl;
    for (int i = 0; i < 15; i++) {
        cin >> arr[i];

        if (arr[i] > max_val) {
            max_val = arr[i];
        }
        if (arr[i] < min_val) {
            min_val = arr[i];
        }
    }

    int sum = max_val + min_val;
    int diff = max_val - min_val;
    cout << "Сумма максимального и минимального значений: " << sum << endl;
    cout << "Разность максимального и минимального значений: " << diff << endl;

    return 0;
}
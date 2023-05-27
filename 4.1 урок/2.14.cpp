//Сам. раб. 4 баз. №2.14



#include <iostream>
using namespace std;

const int arrSize = 17; 
int main() 
{
    int arr[arrSize]; 
    int sum = 0; 
    for (int i = 0; i < arrSize; i++) {
        cout << "Введите элемент " << i + 1 << " массива: ";
        cin >> arr[i];
        if (arr[i] % 3 == 0) { 
            for (int j = 0; j < arrSize; j++) { 
                if (arr[j] % 2 != 0) {
                    sum += arr[j];
                }
            }
            arr[i] = sum; 
        }
        sum = 0; }

    cout << "\nИзмененный массив:\n";
    for (int i = 0; i < arrSize; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

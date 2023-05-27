//самостоятельная базовая 4, 2.25

#include <iostream>
using namespace std;

int main() 
{
    const int SIZE = 15; 
    int arr[SIZE]; 
    cout << "Введите " << SIZE << " элементов массива:\n";
    for (int i = 0; i < SIZE; i++) 
    {
        cin >> arr[i]; 
    }

    int sum = 0; 
    for (int i = 0; i < SIZE; i++) 
    {
        if (arr[i] > 0) { 
            sum += arr[i]; 
        }
    }

    int new_arr[SIZE]; 
    for (int i = 0; i < SIZE; i++) 
    {
        new_arr[i] = arr[i] - sum; 
    }

    cout << "Новый массив:\n";
    for (int i = 0; i < SIZE; i++) 
    {
        cout << new_arr[i] << " "; 
    }
    cout << endl;

    return 0;
}

//самостоятельная базовая 4, 2.27

#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 19; 
    int arr[SIZE]; 
    cout << "Введите " << SIZE << " элементов массива:\n";
    for (int i = 0; i < SIZE; i++) 
    {
        cin >> arr[i]; 
    }

    int max_num = arr[0]; 
    for (int i = 1; i < SIZE; i++) 
    {
        if (arr[i] > max_num) 
        { 
            max_num = arr[i]; 
        }
    }

    cout << "Максимальное число в массиве: " << max_num << endl;

    for (int i = 0; i < SIZE; i++) 
    {
        if (arr[i] % 2 == 0)
        { 
            arr[i] = max_num; 
        }
    }

    cout << "Массив после замены четных элементов на максимальное число:\n";
    for (int i = 0; i < SIZE; i++) 
    {
        cout << arr[i] << " "; 
    }
    cout << endl;

    return 0;
}

//самостоятельная базовая 4, 2.24

#include <iostream>
using namespace std;

int main() 
{
    const int SIZE = 12; 
    double arr[SIZE]; 
    cout << "Введите " << SIZE << " элементов массива:\n";
    for (int i = 0; i < SIZE; i++) 
    {
        cin >> arr[i]; 
    }

    double last = arr[SIZE-1]; 
    int count = 0; 
    double sum = 0; 
    for (int i = 0; i < SIZE-1; i++) 
    {
        if (arr[i] < last) 
        { 
            count++; 
            sum += arr[i]; 
        }
    }

    cout << "Количество чисел, меньших последнего элемента: " << count << endl;
    cout << "Сумма чисел, меньших последнего элемента: " << sum << endl;

    return 0;
}


//самостоятельная базовая 4, 2.26

#include <iostream>
using namespace std;

int main() 
{
    const int SIZE = 15; 
    double arr[SIZE]; 
    cout << "Введите " << SIZE << " элементов массива:\n";
    for (int i = 0; i < SIZE; i++) 
    {
        cin >> arr[i]; 
    }

    double prod_pos = 1; 
    double prod_neg = 1; 
    for (int i = 0; i < SIZE; i++) 
    {
        if (arr[i] > 0) 
        { 
            prod_pos *= arr[i]; 
        } else if (arr[i] < 0)
        { 
            prod_neg *= abs(arr[i]); 
        }
    }

    double diff = prod_pos - prod_neg; 

    cout << "Разность между произведением всех положительных элементов и произведением модулей всех отрицательных: " << diff << endl;

    return 0;
}

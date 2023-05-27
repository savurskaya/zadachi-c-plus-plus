//Сам. раб. 4 баз. №2.15


#include <iostream>
using namespace std;

const int arrSize = 5; 

int main() 
{
    double arr[arrSize]; 
    double sum = 0; 
    for (int i = 0; i < arrSize; i++) {
        cout << "Введите элемент " << i + 1 << " массива: ";
        cin >> arr[i];
        sum += arr[i]; 
    }

    double mean = sum / arrSize; 
    cout << "Сумма элементов массива: " << sum << endl;
    cout << "Среднее значение: " << mean << endl;

    return 0;
}


//сам.р. 4 база 2.21

#include <iostream>

using namespace std;

int main() {
    const int size = 12;
    double arr[size];
    int minIndex = 0; 
    for (int i = 0; i < size; i++) {
        cout << "Введите элемент массива: ";
        cin >> arr[i];
        
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }
    
    arr[minIndex] *= 3;
    
    double temp = arr[minIndex];
    arr[minIndex] = arr[size - 1];
    arr[size - 1] = temp;
    
    cout << "Измененный массив: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
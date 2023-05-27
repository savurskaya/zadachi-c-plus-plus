//сам.р. 4 база 2.20

#include <iostream>

using namespace std;

int main() {
    int arr[16];
    int count = 0; 
    for (int i = 0; i < 16; i++) {
        cout << "Введите элемент массива: ";
        cin >> arr[i];
    }
    
   
    for (int i = 0; i < 16; i++) {
        if (arr[i] % 3 == 0) {
            arr[i] = 0;
            count++; 
        }
    }
    
    cout << "Измененный массив: ";
    for (int i = 0; i < 16; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    cout << "Количество замен: " << count << endl;
    
    return 0;
}
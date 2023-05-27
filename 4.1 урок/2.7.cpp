//сам раб 4 баз 2.7
#include <iostream>
using namespace std;

int main() {
    float arr[15]; 
    int count = 0; 
    for (int i = 0; i < 15; i++) {
        arr[i] = static_cast<float>(rand()) / static_cast<float>(RAND_MAX);
        cout << arr[i] << " ";
        if (i > 0 && arr[i] > arr[0]) {
            count++;
        }
    }

    cout << endl;

    cout << "Количество элементов, значение которых больше первого элемента: " << count << endl;

    return 0;
}
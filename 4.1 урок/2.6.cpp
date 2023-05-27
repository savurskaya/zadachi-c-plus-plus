//сам раб 4 баз2.6
#include <iostream>
using namespace std;

int main() 
{
    int arr[20]; 
    int even_count = 0; 
    int odd_count = 0; 
    for (int i = 0; i < 20; i++) {
        arr[i] = rand() % 100 + 1;
        cout << arr[i] << " ";
        if (arr[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }

    cout << endl;

    if (even_count > odd_count) {
        cout << "Четных элементов больше." << endl;
    } else if (odd_count > even_count) {
        cout << "Нечетных элементов больше." << endl;
    } else {
        cout << "Четных и нечетных элементов поровну." << endl;
    }

    return 0;
}

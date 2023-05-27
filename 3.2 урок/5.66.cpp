//самостоятельная базовая 3, 5.66

#include <iostream>
using namespace std;

int main() 
{
    int n; 
    cout << "Введите количество чисел, которые нужно вычислить: ";
    cin >> n;

    float a = 1; 
    cout << "a0 = " << a << endl; 

    for (int k = 1; k <= n; k++) {
        a = k * a + (1.0 / k); 
        cout << "a" << k << " = " << a << endl; 
    }

    return 0;
}




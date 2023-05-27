//самостоятельная базовая 3, 5.67

#include <iostream>
using namespace std;

int main() 
{
    int n; 
    cout << "Введите количество чисел, которые нужно вычислить: ";
    cin >> n;

    int k; 
    cout << "Введите номер элемента, который нужно найти: ";
    cin >> k;

    int a = 1, b = 1; 
    cout << "a1 = " << a << endl; 
    cout << "a2 = " << b << endl; 

    for (int i = 3; i <= n; i++) {
        int c = a + b; 
        cout << "a" << i << " = " << c << endl; 
        a = b; 
        b = c;
    }

    cout << "a" << k << " = " << ((k == 1 || k == 2) ? 1 : ((k < 1) ? 0 : (a + b))) << endl; 

    return 0;
}



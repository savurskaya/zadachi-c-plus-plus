//сам раб 3 баз 5.47
#include <iostream>
using namespace std;

int main() 
{
    int a[6];
    int product = 1;

    for (int i = 0; i < 6; i++) {
        cout << "Введите число " << i+1 << ": ";
        cin >> a[i];
    }

    for (int i = 0; i < 6; i++) {
        product *= a[i];
    }

    cout << "Произведение чисел: " << product << endl;

    return 0;
}

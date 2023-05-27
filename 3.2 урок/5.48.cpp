//сам раб 3 баз 5.48
#include <iostream>
using namespace std;

int main() 
{
    int a[10];
    int sum = 0;
    for (int i = 0; i < 10; i++) {
        cout << "Введите число " << i+1 << ": ";
        cin >> a[i];
    }

    for (int i = 0; i < 10; i++) {
        sum += a[i]*a[i];
    }

    cout << "Сумма квадратов чисел: " << sum << endl;

    return 0;
}

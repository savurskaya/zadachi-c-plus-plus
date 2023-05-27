//сам раб 3 баз 6.18

#include <iostream>

using namespace std;

int main()
{
    double a;
    cout << "Введите вещественное число a: ";
    cin >> a;

    double sum = 0;
    int n = 1;
    while (sum <= a)
    {
        sum += 1.0 / n;
        n++;
    }

    cout << "Наименьшее n: " << n << endl;
    cout << "Числа от 1 до n-1: ";
    for (int i = 1; i < n; i++)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}

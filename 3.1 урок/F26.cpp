//F26, 3 урок

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x;
    int n;

    cout << "Введите x (|x| < 1): ";
    cin >> x;

    cout << "Введите n (> 0): ";
    cin >> n;

    double sum = 0;
    double sign = 1;
    double power = x;

    for (int i = 1; i <= n; i++)
    {
        sum += sign * power / (2 * i - 1);
        power *= -1 * x * x;
        sign *= -1;
    }

    double arctg = atan(x);

    cout << "Значение выражения: " << sum << endl;
    cout << "Значение arctg(x): " << arctg << endl;

    return 0;
}
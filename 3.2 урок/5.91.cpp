//самостоятельная базовая 3, №5.91


#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    double x, sum = 0.0;

    cout << "Enter x: ";
    cin >> x;
    cout << "Enter n: ";
    cin >> n;

    int fact = 1;
    for (int i = 0; i <= n; i++)
    {
        double term = pow(x, i) / fact;
        sum += term;
        fact *= (i+1);
    }

    cout << "Sum = " << sum << endl;

    return 0;
}
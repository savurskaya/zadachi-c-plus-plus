//самостоятельная базовая 3, №5.90


#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    double sum = 1.0;

    cout << "Enter n: ";
    cin >> n;

    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
        double term = 1.0 / fact;
        sum += term;
    }

    cout << "Sum = " << sum << endl;

    return 0;
}
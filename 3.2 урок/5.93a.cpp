//самостоятельная базовая 3, №5.93(a)


#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    double sum = 0.0;
    double sin_sum = 0.0;

    cout << "Enter the value of n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        sin_sum += sin(i); 
        sum += 1.0 / sin_sum;
    }

    cout << "Sum = " << sum << endl;

    return 0;
}
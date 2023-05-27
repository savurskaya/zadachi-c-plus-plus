//самостоятельная базовая 3, №5.93(в)


#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    double sum = 0.0;
    double cos_sum = 0.0, sin_sum = 0.0;

    cout << "Enter the value of n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cos_sum += cos(i); 
        sin_sum += sin(i); 
        sum += cos_sum / sin_sum; 
    }

    cout << "Sum = " << sum << endl;

    return 0;
}
//самостоятельная базовая 3, №5.92


#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double sum = 0.0;

    for (int i = 1; i <= 50; i++) 
    {
        sum += sqrt(i);
    }

    cout << "Sum = " << sum << endl;

    return 0;
}
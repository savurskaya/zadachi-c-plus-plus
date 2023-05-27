//самостоятельная базовая 3, №5.89


#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    int sum = 0;
    int prod = 1;
    int factorial = 1;

    for (int k = 1; k <= n; k++)
    {
        factorial *= k;   
        sum += factorial; 
        prod *= factorial;
    }

    cout << "Sum = " << sum << endl;
    cout << "Prod = " << prod << endl;

    return 0;
}
//сам раб 3 баз W4

#include <iostream>

using namespace std;

int main()
{
    int N;
    cout << "Введите целое число N: ";
    cin >> N;

    bool isPowerOfThree = true;
    while (N > 1)
    {
        if (N % 3 != 0)
        {
            isPowerOfThree = false;
            break;
        }
        N /= 3;
    }

    if (isPowerOfThree)
        cout << "True" << endl;
    else
        cout << "False" << endl;

    return 0;
}
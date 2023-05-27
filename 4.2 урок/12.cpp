//сам работа 4 продвинутый(12)



#include <iostream>
using namespace std;
int main()
{
    int n;
    double x, result; 
    char answer;
    do {
        cout << "Enter the degree of the polynomial: ";
        cin >> n;
        double A[n+1];
        cout << "Enter the coefficients of the polynomial (starting from the highest):";
        for (int i = n; i >= 0; i--) {
            cin >> A[i];
        }
        cout << "Enter an argument: ";
        cin >> x;
        result = 0;
        for (int i = n; i >= 0; i--) {
            result = result * x + A[i];
        }
        cout << "The value of the polynomial is : " << result << endl;
        cout << "Would you like to continue working? (y/n): ";
        cin >> answer;
    } while (answer == 'y' || answer == 'Y');
    return 0;
}


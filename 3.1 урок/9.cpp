
//сам раб 3 прод 9
#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    int n;
    double product = 1.0;

    cout << "Введите верхнюю границу произведения: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        product *= cos((2*i+1)*M_PI/2);
    }

    cout << "Произведение: " << product << endl;

    return 0;
}

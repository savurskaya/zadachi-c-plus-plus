//сам раб 3 баз W29

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double e;
    cout << "Введите вещественное число e: ";
    cin >> e;

    double A1 = 1, A2 = 2;
    double Ak = A2 + 2 / (4 * A2 - 3); 
    int k = 3; 
    while (abs(Ak - A2) >= e) 
    {
        A1 = A2;
        A2 = Ak;
        k++;
        Ak = A2 + 2 / (4 * A2 - 3);
    }

    cout << "Номер K: " << k << endl;
    cout << "A(k-1): " << A2 << endl;
    cout << "A(k): " << Ak << endl;

    return 0;
}

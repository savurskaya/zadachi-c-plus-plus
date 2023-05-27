//урок 1,задание14
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float a;
    int f;
    float m;
    cout << "Vvedite ugol";
    cin >> a;
    cout << "Vvesite massu";
    cin >> m;
    cout << "Esli telo skolzit po ploskosti, to napishite 1, a esli v sostoyanii pokoya, to 2";
    cin >> f;
    if (f == 1)
    {
        cout << m * 9.8 * cos(a) * tan(a);
    }
    else
    {
        cout << m * 9.8 * sin(a);
    }
}
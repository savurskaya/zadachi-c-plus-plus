//самостоятельная базовая 5, 10.5.1

#include <iostream>
using namespace std;

int main() 
{
    double x, y; 
    int sign_x, sign_y, z; 

    cout << "Введите значение x: ";
    cin >> x;

    cout << "Введите значение y: ";
    cin >> y;

    
    if (x < 0) 
    {
        sign_x = -1;
    } else if (x == 0)
    {
        sign_x = 0;
    } else 
    {
        sign_x = 1;
    }

    if (y < 0) 
    {
        sign_y = -1;
    } else if (y == 0)
    {
        sign_y = 0;
    } else 
    {
        sign_y = 1;
    }

    
    z = sign_x + sign_y;

    cout << "Значение z = " << z << endl;

    return 0;
}

//самостоятельная базовая 5, 10.5.2

#include <iostream>
using namespace std;

int sign(double a) 
{
    if (a < 0) {
        return -1;
    } else if (a == 0) 
    {
        return 0;
    } else {
        return 1;
    }
}

int main() 
{
    double x, y; 
    int sign_x, sign_y, z; 

    cout << "Введите значение x: ";
    cin >> x;

    cout << "Введите значение y: ";
    cin >> y;

    
    sign_x = sign(x);
    sign_y = sign(y);

    z = sign_x + sign_y;

    cout << "Значение z = " << z << endl;

    return 0;
}

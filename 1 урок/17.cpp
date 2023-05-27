//сам раб 1 прод 17
#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    double v, V, me, h, A;
    me = 9.1e-31; 
    h = 6.626e-34; 

    cout << "Введите частоту фотона (в Гц): ";
    cin >> v;
    cout << "Введите скорость электрона на выходе (в м/с): ";
    cin >> V;

    if (h * v < me * pow(V, 2) / 2) {
        cout << "Ошибка: введены некорректные значения v и V" << endl;
        return 0;
    }
    else {
        A = h * v - me * pow(V, 2) / 2; 
        cout << "Работа электрона: " << A << " Дж" << endl;
        return 0;
    }
}

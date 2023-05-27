//Самостоятельная базовая 5, 10.4(2) 


#include <iostream>
using namespace std;

int my_min(int x, int y) {
    return (x < y) ? x : y;
}

int main()
{
    int a, b, x, y;

    // вводим значения a и b
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    // вычисляем x и y, минимальные значения из a и 3b-2a-b
    x = my_min(a, 3*b);
    y = my_min(2*a-b, 26);

    // находим минимальное значение z с помощью функции my_min
    int z = my_min(x, y);

    // выводим результат
    cout << "z = " << z << endl;

    return 0;
}
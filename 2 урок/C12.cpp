//C12, 2 урок
#include <iostream>

using namespace std;

int main()
{
    const float Pi = 3.14; 
    int number; 
    float value; 
    cout << "Введите номер элемента (1 - радиус, 2 - диаметр, 3 - длина, 4 - площадь): ";
    cin >> number;

    cout << "Введите значение элемента: ";
    cin >> value;

    switch (number) { 
        case 1: 
        cout << "Диаметр:\t" << 2 * value << endl;
            cout << "Длина:\t\t" << 2 * Pi * value << endl;
            cout << "Площадь:\t" << Pi * value * value << endl;
            break;
        case 2: 
        cout << "Радиус:\t\t" << value / 2 << endl;
            cout << "Длина:\t\t" << Pi * value << endl;
            cout << "Площадь:\t" << Pi * value * value / 4 << endl;
            break;
        case 3: 
        cout << "Радиус:\t\t" << value / (2 * Pi) << endl;
            cout << "Диаметр:\t" << value / Pi << endl;
            cout << "Площадь:\t" << Pi * value * value / (4 * Pi * Pi) << endl;
            break;
        case 4:
        cout << "Радиус:\t\t" << sqrt(value / Pi) << endl;
            cout << "Диаметр:\t" << sqrt(value / Pi) * 2 << endl;
            cout << "Длина:\t\t" << sqrt(value / Pi) * 2 * Pi << endl;
            break;
        default: 
        cout << "Некорректный номер элемента!" << endl;
            break;
    }

    return 0;
}

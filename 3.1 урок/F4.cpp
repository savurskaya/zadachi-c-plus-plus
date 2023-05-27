//сам раб 3 баз F4

#include <iostream>

using namespace std;

int main()
{
    float price;
    cout << "Введите цену 1 кг конфет: ";
    cin >> price;

    cout << "Стоимость 1 кг конфет: " << price << endl;
    for (int i = 2; i <= 10; i++)
    {
        cout << "Стоимость " << i << " кг конфет: " << price * i << endl;
    }

    return 0;
}



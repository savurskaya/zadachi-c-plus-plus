//сам раб 3 баз F3

#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout << "Введите два целых числа (А и В, где 4 <= B): ";
    cin >> a >> b;

    int count = 0;
    cout << "Целые числа между А и В в порядке убывания: ";
    for (int i = b - 1; i > a; i--)
    {
        cout << i << " ";
        count++;
    }
    cout << endl;

    cout << "Количество этих чисел: " << count << endl;

    return 0;
}

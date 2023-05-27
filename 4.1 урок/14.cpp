//самостоятельная продвинутая 4, 14

#include <iostream>
using namespace std;

int main() 
{
    const int SIZE = 5; 
    double coeffs[SIZE]; 
    double x; 
    char choice; 

    do {
        cout << "Введите коэффициенты полинома (от a0 до a" << SIZE-1 << "):\n";
        for (int i = 0; i < SIZE; i++) 
        {
            cin >> coeffs[i]; 
        }

        cout << "Введите значение аргумента x: ";
        cin >> x;

        double result = 0; 
        for (int i = 0; i < SIZE; i++) 
        {
            result += coeffs[i] * pow(x, i); 
        }

        cout << "Значение полинома для x = " << x << ": " << result << endl;

        cout << "Хотите продолжить вычисления? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}


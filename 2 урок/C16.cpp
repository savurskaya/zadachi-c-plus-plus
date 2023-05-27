//сам раб 2 C16
#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Введите возраст (от 20 до 69): ";
    cin >> age;

    int lastDigit = age % 10; 
    int secondLastDigit = age / 10 % 10; 
    switch (secondLastDigit) {
        case 2:
            cout << "двадцать ";
            break;
        case 3:
            cout << "тридцать ";
            break;
        case 4:
            cout << "сорок ";
            break;
        case 5:
            cout << "пятьдесят ";
            break;
        case 6:
            cout << "шестьдесят ";
            break;
    }

    switch (lastDigit) {
        case 1:
            cout << "один год";
            break;
        case 2:
        case 3:
        case 4:
            cout << lastDigit << " года";
            break;
        default:
            cout << lastDigit << " лет";
    }

    return 0;
}

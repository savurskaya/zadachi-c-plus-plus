//сам раб 2 C17
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Введите количество учебных заданий (от 10 до 40): ";
    cin >> num;

    int lastDigit = num % 10; 
    int secondLastDigit = num / 10 % 10; 
    switch (secondLastDigit) {
        case 1:
            cout << num << " учебных заданий";
            break;
        case 2:
            cout << "двадцать ";
            break;
        case 3:
            cout << "тридцать ";
            break;
        case 4:
            cout << "сорок ";
            break;
    }

    switch (lastDigit) {
        case 1:
            cout << "одно учебное задание";
            break;
        case 2:
        case 3:
        case 4:
            cout << lastDigit << " учебных задания";
            break;
        default:
            cout << lastDigit << " учебных заданий";
    }

    return 0;
}

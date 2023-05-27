//самостоятельная базовая 1, B31

#include <iostream>
using namespace std;

int main() {
    float fahrenheit;
    cout << "Введите значение температуры в градусах Фаренгейта: ";
    cin >> fahrenheit;

    float celsius = (fahrenheit - 32) * 5 / 9; 
    cout << "Значение температуры в градусах Цельсия: " << celsius << endl;

    return 0;
}
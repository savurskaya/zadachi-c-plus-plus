//Занятие 5, задание 185
#include <iostream>
using namespace std;

double calculateVolume(double radius, double height) 
{
    const double pi = 3.14159; 
    double volume = pi * radius * radius * height;

    return volume;
}

int main()
{
    double radius, height;
    cout << "Введите радиус цилиндра: ";
    cin >> radius;
    cout << "Введите высоту цилиндра: ";
    cin >> height;

    double volume = calculateVolume(radius, height); 
    cout << "Объем цилиндра: " << volume << endl;

    return 0;
}
//сам раб1, прод №9

#include <iostream>

#include <cmath>

using namespace std;

int main()

{

double h, u, s, t;

cout « "Введите высоту полета самолета (м): ";

cin » h;

cout « "Введите скорость самолета (м/с): ";

cin » u;

t = sqrt(2 * h / 9); // вычисляем время полета бомбы

s = u * t; // вычисляем расстояние до объекта

cout « "Подлетное расстояние до объекта (м): " « s « endl;

return 0;

}
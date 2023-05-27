//сам раб 3 прод, №1

#include <iostream>

#include <cmath>

using namespace std;

int main()

{

double x;

const int n = 10;

double sum = 0;

cout « "Введите значение аргумента x: ";

cin » x;

for (int m = 0; m <= n; m++)

{

sum += pow(-1, m) * pow(x, 2*m) / tgamma(2*m + 1);

}

cout « "Значение косинуса: " « sum « endl;

return 0;

}


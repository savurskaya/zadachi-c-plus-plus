// Урок 3 базовая с/р F18

#include <iostream>
#include <math.h>

using namespace std;

int main() {
double a;
int n;
double sum = 1.0;

cout << "Введите вещественное число A: ";
cin >> a;
cout << "Введите целое число N (> 0): ";
cin >> n;

double a_power = a;
for (int i = 1; i <= n; i++) {
    sum += pow(-1.0, i) * a_power;
    a_power *= a;
}

cout << "Значение выражения: " << sum << endl;

return 0;
}

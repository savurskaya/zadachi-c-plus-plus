// Урок 5 продвинутая с/р 19

#include <iostream>
#include <math.h>

using namespace std;
double calc_a(double x[], double y[], int n) {
double sum_x = 0, sum_y = 0, sum_xy = 0, sum_x2 = 0, a;
for (int i = 0; i < n; i++) {
sum_x += x[i];
sum_y += y[i];
sum_xy += x[i] * y[i];
sum_x2 += pow(x[i], 2);
}
a = (n * sum_xy - sum_x * sum_y) / (n * sum_x2 - pow(sum_x, 2));
return a;
}
double calc_b(double x[], double y[], int n) {
double sum_x = 0, sum_y = 0, sum_xy = 0, sum_x2 = 0, b;
for (int i = 0; i < n; i++) {
sum_x += x[i];
sum_y += y[i];
sum_xy += x[i] * y[i];
sum_x2 += pow(x[i], 2);
}
b = (sum_y - calc_a(x, y, n) * sum_x) / n;
return b;
}

int main() {
int n;
cout << "Введите количество точек: ";
cin >> n;
double x[n], y[n];
for (int i = 0; i < n; i++) {
cout << "Введите координату x" << i + 1 << ": ";
cin >> x[i];
cout << "Введите координату y" << i + 1 << ": ";
cin >> y[i];
}
double a = calc_a(x, y, n);
double b = calc_b(x, y, n);
cout << "Регрессионная модель: f(x) = " << a << "x + " << b << endl;
return 0;
}

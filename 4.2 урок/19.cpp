// Самостоятельная продвинутый 4, задача 19

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    vector<double> x, y;
    double n, sum_x = 0, sum_y = 0, sum_xy = 0, sum_x2 = 0, a, b;

    cout << "Введите количество значений: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        double xi, yi;
        cout << "Введите значение x" << i+1 << ": ";
        cin >> xi;
        cout << "Введите значение y" << i+1 << ": ";
        cin >> yi;
        x.push_back(xi);
        y.push_back(yi);
        sum_x += xi;
        sum_y += yi;
        sum_xy += xi * yi;
        sum_x2 += pow(xi, 2);
    }

    b = (n * sum_xy - sum_x * sum_y) / (n * sum_x2 - pow(sum_x, 2));
    a = (sum_y - b * sum_x) / n;

    cout << "Параметры регрессионной модели: a = " << a << ", b = " << b << endl;

    return 0;
}
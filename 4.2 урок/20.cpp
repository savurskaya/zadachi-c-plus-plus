//Задание 20, 4 урок

```
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    int n; 
    cout << "Введите количество точек: ";
    cin >> n;

    vector<double> x(n); 
    vector<double> y(n); 

    cout << "Введите значения x и y:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    double x_mean = 0, y_mean = 0;
    for (int i = 0; i < n; i++) {
        x_mean += x[i];
        y_mean += y[i];
    }
    x_mean /= n;
    y_mean /= n;
    double a = 0, b = 0;
    for (int i = 0; i < n; i++) {
        a += (x[i] - x_mean) * (y[i] - y_mean);
        b += (x[i] - x_mean) * (x[i] - x_mean);
    }
    a /= b;
    b = y_mean - a * x_mean;

    cout << "Параметры модели: a=" << a << ", b=" << b << endl;

    return 0;
}
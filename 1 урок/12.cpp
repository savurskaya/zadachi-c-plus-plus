// самраб 1 прод 12
```

#include <iostream>

#include <cmath>

using namespace std;

int main()

{

double m, a, u, F0, Ft, F, a_new;

cout << "Введите массу тела m: ";

cin >> m;

cout << "Введите угол a (в градусах): ";

cin >> a;

a = a * M_PI / 180.0; // переводим градусы в радианы

cout << "Введите коэффициент трения u: ";

cin >> u;

cout << "Введите силу F0: ";

cin >> F0;

Ft = u * m * 9.81 * sin(a);

F = F0 * cos(a) - Ft;

a_new = (abs(F) < 0.0001) ? 0.0 : F / m;

cout << "Ускорение тела: " << a_new << " м/c²" << endl;

return 0;

}
// сам. раб 2 B28
#include <iostream>

using namespace std;

int main() {
    float x, y;
    cout << "Введите координаты точки (x, y): ";
    cin >> x >> y;
    if ((x > 0 && y > 0) || (x < 0 && y < 0)) {
        cout << "Точка лежит в первой или третьей координатной четверти";
    } else 
    {
        cout << "Точка не лежит в первой или третьей координатной четверти";
    }
return 0;
}

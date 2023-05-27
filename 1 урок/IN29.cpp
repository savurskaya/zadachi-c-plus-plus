//самостоятельная базовая 1, №IN29


#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    int squares, area;
    
    cout << "Введите размеры прямоугольника A, B: ";
    cin >> a >> b;
    
    cout << "Введите размер стороны квадрата C: ";
    cin >> c;
    
    squares = (a / c) * (b / c);
    
    cout << "Количество квадратов на прямоугольнике: " << squares << endl;
    
    area = a * b - squares * c * c;
    
    cout << "Площадь незанятой части прямоугольника: " << area << endl;
    
    return 0;
}
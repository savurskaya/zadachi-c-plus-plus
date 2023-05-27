//самостоятельная базовая 1, №Begin 19

#include <iostream>

#include <cmath>

double calculatePerimeter(double x1, double y1, double x2, double y2) {

double length = std::abs(x2 - x1);

double width = std::abs(y2 - y1);

return 2 * (length + width);

}

double calculateArea(double x1, double y1, double x2, double y2) {

double length = std::abs(x2 - x1);

double width = std::abs(y2 - y1);

return length * width;

}

int main() {

double x1, y1, x2, y2;

std::cout << "Введите координаты двух противоположных вершин прямоугольника:" << std::endl;

std::cout << "x1: ";

std::cin >> x1;

std::cout << "y1: ";

std::cin >> y1;

std::cout << "x2: ";

std::cin >> x2;

std::cout << "y2: ";

std::cin >> y2;

double perimeter = calculatePerimeter(x1, y1, x2, y2);

double area = calculateArea(x1, y1, x2, y2);

std::cout << "Периметр прямоугольника: " << perimeter << std::endl;

std::cout << "Площадь прямоугольника: " << area << std::endl;

return 0;

}
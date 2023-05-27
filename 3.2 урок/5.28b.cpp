#include <iostream>

using namespace std;

int main() {

int a;

cout << "Введите значение a (1 <= a <= 20): ";

cin >> a;

int prod = 1;

for (int i = a; i <= 20; i++) {

prod *= i;

}

cout << "Произведение всех целых чисел от " << a << " до 20: " << prod << endl;

return 0;

}
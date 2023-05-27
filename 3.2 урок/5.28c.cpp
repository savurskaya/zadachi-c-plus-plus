#include <iostream>

using namespace std;

int main() {

int b;

cout << "Введите значение b (1 <= b <= 20): ";

cin >> b;

int prod = 1;

for (int i = 1; i <= b; i++) {

prod *= i;

}

cout << "Произведение всех целых чисел от 1 до " << b << ": " << prod << endl;

return 0;

}
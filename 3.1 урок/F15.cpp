// Урок 3 базовая c/р F15

#include <iostream>

using namespace std;

int main() {
double a, result = 1; 
int n;

cout << "Введите число A: ";
cin >> a;

cout << "Введите целое число N: ";
cin >> n;

for (int i = 0; i < n; i++) {
    result *= a; 
}

cout << a << "^" << n << " = " << result;

return 0;
}

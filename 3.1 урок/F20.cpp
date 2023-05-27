// Урок 3 базовая с/р F20

#include <iostream>
using namespace std;

int main() {
int N;
double sum = 0, factorial = 1;

cout << "Введите число N: ";
cin >> N;

for (int i = 1; i <= N; i++) {
    factorial *= i; 
    sum += factorial; 
}

cout << "Сумма всех факториалов до N равна " << sum << endl;

return 0;
}

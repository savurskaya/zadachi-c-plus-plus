// Урок 3 базовая с/р F17

#include <iostream>
#include <math.h>

using namespace std;

int main() {
double A;
int N;
cout << "Введите вещественное число A и целое число N: ";
cin >> A >> N;
double sum = 0;
for (int i = 0; i <= N; i++) {
sum += pow(A, i);
}
cout << "Сумма ряда: " << sum << endl;
return 0;
}

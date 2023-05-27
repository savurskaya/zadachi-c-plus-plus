// Урок 3 базовая с/р F16

#include <iostream>
#include <math.h>

using namespace std;

int main() {
double A;
int N;

cout << "Введите число A: ";
cin >> A;
cout << "Введите число N: ";
cin >> N;

for (int i = 1; i <= N; i++) {
    cout << pow(A, i) << endl;
}

return 0;
}
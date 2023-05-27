// Урок 3 базовая с/р F19

#include <iostream>
using namespace std;
int main() {
int N;
double factorial = 1;
cout << "Введите целое число N: ";
cin >> N;
for (int i = 1; i <= N; i++) {
factorial *= i;
}
cout << "N! = " << factorial << endl;
return 0;
}

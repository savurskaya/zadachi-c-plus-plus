#include <iostream>

using namespace std;

int main()

{

int a, b;

cin >> a >> b;

int sum = 0;

for (int i = a; i <= 6; i++) {

sum += i;

}

cout << "Сумма всех целых чисел от " << a << " до 6 равна " << sum << endl;

return 0;

}


#include <iostream>

using namespace std;

int main()

{

int b, a = -10;

cin >> b;

int sum = 0;

while (a <= b) {

sum += a;

a++;

}

cout << "Сумма всех целых чисел от -10 до " << b << " равна " << sum << endl;

return 0;

}
//самраб3 баз5.27b

#include <iostream>

using namespace std;

int main()

{

int a;

cin >> a;

int sum = 0;

for (int i = a; i <= 500; i++) {

sum += i;

}

cout << "Сумма всех целых чисел от " << a << " до 500 равна " << sum << endl;

return 0;

}


//сам раб 3 баз, 5.10

#include <iostream>

using namespace std;

int main()

{

float rate;

cout « "Введите курс доллара: ";

cin » rate;

cout « "Доллары\tРубли" « endl;

for(int i=1; i<=20; i++)

{

float rub = i*rate;

cout « i « "\t" « rub « endl;

}

return 0;

}


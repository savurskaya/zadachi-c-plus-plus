//сам раб 3 баз, 5.8

#include <iostream>

using namespace std;

int main()

{

cout « "Фунты\tКилограммы" « endl;

for(int i=1; i<=10; i++)

{

float kg = i*453.0/1000.0;

cout « i « "\t" « kg « endl;

}

return 0;

}
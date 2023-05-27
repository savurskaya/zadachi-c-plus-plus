//сам раб 4 прод №1

#include <iostream>

#include <cmath>

using namespace std;

int main()

{

int a1, a2, a3;

cout « "Enter components of vector a: ";

cin » a1 » a2 » a3;

double mod = sqrt(pow(a1, 2) + pow(a2, 2) + pow(a3, 2));

cout « "The modulus of vector a is: " « mod « endl;

return 0;

}
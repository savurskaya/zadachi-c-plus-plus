//сам раб 3 баз, 5.12

#include <iostream>

using namespace std;

int main()

{

const float Ro = 1.29;

const float h_step = 100;

for(int h=0; h<=1000; h+=h_step)

{

float p = Ro * exp(-h/8200.0);

cout « "Высота: " « h « " м, плотность: " « p « " кг/м^3" « endl;

}

return 0;

}
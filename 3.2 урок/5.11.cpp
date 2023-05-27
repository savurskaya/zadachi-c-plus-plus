//сам раб 3 баз, 5.11

#include <iostream>

#include <cmath>

using namespace std;

int main()

{

const float R = 6350; // радиус Земли

for(int h=1; h<=10; h++)

{

float d = sqrt(pow(R+h,2)-pow(R,2)); // расстояние до горизонта

cout « "Высота: " « h « " км, расстояние до горизонта: " « d « " км" « endl;

}

return 0;

}
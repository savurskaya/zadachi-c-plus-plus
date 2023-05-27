//сам раб 2, Boolean 27

#include <iostream>

using namespace std;

int main()

{

float x, y;

cout « "Введите координаты точки (x, y): ";

cin » x » y;

bool is_in_second_quadrant = x < 0 && y > 0;

bool is_in_third_quadrant = x < 0 && y < 0;

if (is_in_second_quadrant || is_in_third_quadrant)

{

cout « "Точка с координатами (" « x « ", " « y « ") лежит во второй или третьей координатной четверти" « endl;

}

else

{

cout « "Точка с координатами (" « x « ", " « y « ") не лежит во второй или третьей координатной четверти" « endl;

}

return 0;

}
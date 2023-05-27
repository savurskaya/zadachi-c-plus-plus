//сам раб 2, Boolean 26

#include <iostream>

using namespace std;

int main()

{

int x, y;

cout « "Введите координаты точки (x, y): ";

cin » x » y;

if (x > 0 && y < 0)

{

cout « "Точка с координатами (" « x « ", " « y « ") лежит в четвертой координатной четверти" « endl;

}

else

{

cout « "Точка с координатами (" « x « ", " « y « ") не лежит в четвертой координатной четверти" « endl;

}

return 0;

}
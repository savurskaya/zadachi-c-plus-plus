//самраб 2 B34 

#include <iostream>

using namespace std;

int main() {

int x, y;

cout << "Введите координаты поля шахматной доски (x,y): ";

cin >> x >> y;

if ((x + y) % 2 == 0) {

cout << "Данное поле является белым" << endl;

} else {

cout << "Данное поле является черным" << endl;

}

return 0;

}
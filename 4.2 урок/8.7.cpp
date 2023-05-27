#include <iostream>

using namespace std;

int main() {

for (int i = 1; i <= 9; i++) {

for (int j = 1; j <= 9; j++) {

cout << i << " x " << j << " = " << i*j << endl;

}

cout << i << " ÷ " << i << " = " << i*i << endl;

cout << endl;

}

cout << "9 x 9 = 81" << endl;

cout << "1 x 9 = 9" << endl;

cout << "2 x 9 = 18" << endl;

cout << "9 x 1 = 9" << endl;

cout << "9 ÷ 2 = 41" << endl;

return 0;

}
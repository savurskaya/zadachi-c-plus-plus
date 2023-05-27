#include <iostream>

using namespace std;

int main() {

for (int i = 1; i <= 9; i++) {

for (int j = 1; j <= 9; j++) {

cout << i << " + " << j << " = " << i+j << endl;

}

cout << i << " ÷ " << i << " = " << i*2 << endl;

cout << endl;

}

cout << "9 + 9 = 18" << endl;

cout << "1 ÷ 9 = 10" << endl;

cout << "2 ÷ 9 = 11" << endl;

cout << "9 + 1 = 10" << endl;

cout << "9 ÷ 2 = 11" << endl;

return 0;

}
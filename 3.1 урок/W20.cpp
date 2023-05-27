#include <iostream>

using namespace std;

int main() {

int n;

bool hasTwo = false;

cout << "Enter a positive integer: ";

cin >> n;

while (n > 0) {

if (n % 10 == 2) {

hasTwo = true;

break;

}

n /= 10;

}

if (hasTwo) {

cout << "True" << endl;

} else {

cout << "False" << endl;

}

return 0;

}


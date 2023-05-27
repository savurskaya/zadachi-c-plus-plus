#include <iostream>

using namespace std;

int main() {

int prod = 1;

for (int i = 8; i <= 15; i++) {

prod *= i;

}

cout << "Произведение всех целых чисел от 8 до 15: " << prod << endl;

return 0;

}
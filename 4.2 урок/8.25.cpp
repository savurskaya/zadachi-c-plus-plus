#include <iostream>

using namespace std;

int main() {

int arr[21];

for (int i = 0; i < 21; i++) {

arr[i] = 120 + i;

}

for (int i = 0; i < 21; i++) {

int count = 0;

for (int j = 1; j <= arr[i]; j++) {

if (arr[i] % j == 0) {

count++;

}

}

cout << "Число " << arr[i] << " имеет " << count << " делителей." << endl;

}

return 0;

}
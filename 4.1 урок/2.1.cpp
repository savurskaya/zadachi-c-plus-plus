//4 базовый --- 2.1

#include <iostream>
using namespace std;

int main() {
int arr[14];
int count = 0;

for(int i = 0; i < 14; i++) {
cout << "Введите элемент " << i + 1 << ": ";
cin >> arr[i];
}


for(int i = 0; i < 14; i++) {
if(arr[i] % 2 == 0) {
count++;
}
}

cout << "Количество четных элементов: " << count << endl;

return 0;
}
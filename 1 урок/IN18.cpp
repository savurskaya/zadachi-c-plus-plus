// самостоятельная работа 1 базовый in18


#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Введите число больше 999: ";
    cin >> n;
    int thousands = (n / 1000) % 10;
    cout << "Цифра, соответствующая разряду тысяч: " << thousands << endl;
    return 0;
}
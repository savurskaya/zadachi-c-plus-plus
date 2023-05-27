// сам.раб. 3 баз 5.15

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Введите число от 1 до 9: ";
    cin >> n;

    if (n >= 1 && n <= 9) {
        for (int i = 1; i <= 10; i++) {
            int result = n * i;
            cout << n << " * " << i << " = " << result << endl;
        }
    } else {
        cout << "Ошибка! Вы ввели число, не входящее в диапазон от 1 до 9." << endl; 
    }
    return 0;
}
//сам раб 3 баз 5.39


#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    for (int i = 1; i <= 10; i++) {
        int num;
        cout << "Введите число #" << i << ": ";
        cin >> num;
        sum += num;
    }
    cout << "Сумма чисел: " << sum;

   return 0;
}

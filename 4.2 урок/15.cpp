// 4 урок прод. задание 15
#include <iostream>
using namespace std;

int main() {
    int n; 
    cout << "Введите степень полинома: ";
    cin >> n;

    int coef[n+1]; 
    for (int i = 0; i <= n; i++) {
        cout << "Введите коэффициент при x^" << i << ": ";
        cin >> coef[i];
    }

    char choice; 
    do {
        int x; 
        cout << "Введите значение аргумента: ";
        cin >> x;

        int derivative = 0; 
        for (int i = 1; i <= n; i++) {
            derivative += i * coef[i] * pow(x, i-1); 
            
        }

        cout << "Значение производной полинома в точке " << x << ": " << derivative << endl;

        cout << "Продолжить работу? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}
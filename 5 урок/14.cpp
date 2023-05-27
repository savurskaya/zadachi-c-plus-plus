// 5 урок прод. задание 14 
#include <iostream>
using namespace std;

int polynomial(int coef[], int n, int x) {
    int result = 0;
    for (int i = 0; i <= n; i++) {
        result += coef[i] * pow(x, i);
    }
    return result;
}

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

        int value = polynomial(coef, n, x); 

        cout << "Значение полинома в точке " << x << ": " << value << endl;

        cout << "Продолжить работу? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}

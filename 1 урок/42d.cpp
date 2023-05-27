//сам.р. 1 баз 42(Д)


#include <iostream>
using namespace std;

int main() {
    double a;
    cout << "Введите вещественное число a: ";
    cin >> a;
    
    double a2 = a * a; 
    double a4 = a2 * a2; 
    double a5 = a * a4; 
    double a8 = a4 * a4; 
    double a16 = a8 * a8; 
    double a17 = a * a16; 
    
    cout << "a^2 = " << a2 << endl;
    cout << "a^5 = " << a5 << endl;
    cout << "a^17 = " << a17 << endl;
    
    return 0;
}
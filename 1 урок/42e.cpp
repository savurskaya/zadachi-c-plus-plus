//сам.р. 1 баз 42(Е)


#include <iostream>
using namespace std;

int main() {
    double a;
    cout << "Введите вещественное число a: ";
    cin >> a;
    
    double a2 = a * a; 
    double a4 = a2 * a2; 
    double a8 = a4 * a4; 
    double a12 = a4 * a8; 
    double a16 = a8 * a8; 
    double a26 = a16 * a8 * a2; 
    
    cout << "a^4 = " << a4 << endl;
    cout << "a^12 = " << a12 << endl;
    cout << "a^26 = " << a26 << endl;
    
    return 0;
}
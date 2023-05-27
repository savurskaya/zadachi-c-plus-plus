//сам.р. 1 баз 42(Г)


#include <iostream>
using namespace std;

int main() {
    double a;
    cout << "Введите вещественное число a: ";
    cin >> a;
    
    double a2 = a * a;
    double a4 = a2 * a2; 
    double a8 = a4 * a4; 
    double a16 = a8 * a8; 
    
    double a15 = a * a4 * a8; 
    double a19 = a * a4 * a16; 
    
    cout << "a^15 = " << a15 << endl;
    cout << "a^19 = " << a19 << endl;
    
    return 0;
}

//сам.р. 1 баз IN25

#include <iostream>

using namespace std;

int main() {
    int k;
    cout << "Введите номер дня года (от 1 до 365): ";
    cin >> k;
    
    int dayOfWeek = (k + 3) % 7; 
    
    cout << "Номер дня недели для " << k << "-го дня года: " << dayOfWeek << endl;
    
    return 0;
}

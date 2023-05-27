// 1 урок баз.  IN27
IN27 
#include <iostream>
using namespace std;

int main() {
    int k;
    cout << "Введите номер дня года (1-365): ";
    cin >> k;
    int dayOfWeek = (k + 5) % 7 + 1;
    cout << "Номер дня недели: " << dayOfWeek << endl;
    return 0;
}
//сам раб 3 баз 5.46

#include <iostream>
using namespace std;

int main() 
{
    float resistance[10];
    float total_resistance = 0;
    for (int i = 0; i < 10; i++) {
        cout << "Введите сопротивление элемента " << i+1 << ": ";
        cin >> resistance[i];
    }

    for (int i = 0; i < 10; i++) {
        total_resistance += 1/resistance[i];
    }

    total_resistance = 1/total_resistance;

    cout << "Общее сопротивление цепи: " << total_resistance << endl;

    return 0;
}
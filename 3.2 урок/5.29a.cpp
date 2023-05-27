//самостоятельная работа номер 3 базовый номер 5.29а


#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    for (int i = 1; i <= 1000; i++) {
        sum += i;
    }
    double avg = (double)sum / 1000;
    cout << "Среднее арифметическое: " << avg << endl;
    return 0;
}
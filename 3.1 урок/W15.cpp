//сам раб 3 баз W15
#include <iostream>
using namespace std;

int main() 
{
    double p;
    cout << "Введите процентную ставку P (0 < P < 25): ";
    cin >> p;

    int k = 0;
    double s = 1000;

    while (s < 1100) {
        s += s * (p / 100);
        k++;
    }

    cout << "Размер вклада превысит 1100 рублей через " << k << " месяцев" << endl;
    cout << "Итоговый размер вклада: " << s << " рублей" << endl;

    return 0;
}

// 3 урок баз. 5.71
#include <iostream>
using namespace std;

int main() {
    double deposit = 1000; 
    double interest = 0.02; 
    for (int i = 1; i <= 10; i++) { 
        double growth = deposit * interest; 
        deposit += growth; 
        cout << "Прирост суммы вклада за " << i << " месяц: " << growth << " руб." << endl;
    }
    for (int i = 3; i <= 12; i++) { 
        deposit *= (1 + interest); 
        cout << "Сумма вклада через " << i << " месяц: " << deposit << " руб." << endl;
    }
    return 0;
}
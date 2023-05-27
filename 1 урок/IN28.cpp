//Самостоятельная работа 1 базовый уровень, in28

#include <iostream>
using namespace std;

int main() {
int k, n;
cout << "Enter the day of the year (1-365): ";
cin >> k;
cout << "Enter the day of the week for January 1st (1-7): ";
cin >> n;

int dayOfWeek = ((k - 1) + (n - 1)) % 7 + 1;
cout << "The day of the week for day " << k << " is " << dayOfWeek << endl;

return 0;
}
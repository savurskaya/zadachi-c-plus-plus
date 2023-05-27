//сам раб 4 баз  8.33


#include <iostream>

using namespace std;

int main() {
    for (int i = 50; i <= 70; i++) { 
        int sum = 0;
        for (int j = 1; j <= i /2 ; j++) { 
            if (i % j ==0) {
                sum +=j;
            }
        }
        cout << "Сумма делителей числа " << i << ": " << sum+i<< endl;
    }

    return 0;
}

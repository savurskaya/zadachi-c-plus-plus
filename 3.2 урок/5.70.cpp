// 3 урок баз. 5.70 
#include <iostream>
using namespace std;

int main() {
    int amoeba = 1; 
    for (int i = 3; i <= 24; i += 3) { 
        amoeba *= 2; 
        cout << "Через " << i << " часов будет " << amoeba << " амеб" << endl;
    }
    return 0;
}
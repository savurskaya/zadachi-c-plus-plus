//сам раб 4 баз  8.34


#include <iostream>
using namespace std;

int main() {
    for (int i = 100; i <= 300; i++) { 
        int sum = 0;
        for (int j = 1; j <= i /2 ; j++) { 
            if (i % j ==0) {
                sum +=j;
            }
        }
        if(sum ==50) { 
            cout <<i <<" ";
        }
    }

    return 0;
}

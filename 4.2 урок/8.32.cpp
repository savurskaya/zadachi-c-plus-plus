//сам раб 4 баз  8.32


#include <iostream>

using namespace std;

bool isPrime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int count = 0, num = 2;

    while(count <100){
        if(isPrime(num)){
            cout << num << " ";
            count++;
        }
        num++;
   }

   return 0;
}
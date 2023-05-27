//сам раб 4 баз 8.31


#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    
   for(int num=100;num<=999;++num){
       if(isPrime(num)){
           cout<<num<<" ";
       }
   }

   return 0;
}

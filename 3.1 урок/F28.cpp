//сам раб 3 баз F28
#include <iostream>
using namespace std;
 
int main() {
    setlocale(LC_ALL, "Russian");
    float x;
    cout<<"X:";
    cin>>x;
 
    int n;
    cout<<"N:";
    cin>>n;
 
    float temp1 = 1, temp2 = 1, rez = 1, pow = 1;
    int i;
    for (i = 1; i < n; ++i) {
        temp1 *= 2 * i - 3;
        temp2 *= 2 * i;
        pow *= (-1) * x;
        rez += temp1 * pow / temp2;
    }
    cout<< rez;
}


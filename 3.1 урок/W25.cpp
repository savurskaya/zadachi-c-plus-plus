//сам раб 3 баз W25


#include <iostream>
using namespace std;
 
int main() {
    setlocale(LC_ALL, "Russian");
    int n;
    cout << "N:";
    cin >> n;
 
    int f1 = 1, f2 = 1, f = 0;
 
    while (f < n + 1) {
        f = f2 + f1;
        f2 = f1;
        f1 = f;
    }
    cout << f;
    return 0;
}

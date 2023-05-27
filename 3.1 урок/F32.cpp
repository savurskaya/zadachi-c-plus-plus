//сам раб 3 баз F32


#include <iostream>
using namespace std;
 
int main() {
    setlocale(LC_ALL, "Russian");
    int n;
    cout << "N:";
    cin >> n;
 
    float ai = 1;
    cout<< ai<<" ";
    int i;
    for (i = 1; i <= n; ++i) {
        cout<< i<<" "<< (ai + 1) / i<<" ";
        ai = (ai + 1) / i;
    }
    return 0;
}
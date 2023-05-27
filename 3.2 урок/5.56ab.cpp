//Сам. раб. 3 баз. №5.56 (а,б)


#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sum_abs = 0;
    int prod_abs = 1;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        sum_abs += abs(a);
        prod_abs *= abs(a);
    }
    cout << sum_abs << endl;
    cout << prod_abs << endl;
    return 0;
}
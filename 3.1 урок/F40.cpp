//сам раб 3 баз F40


#include <iostream>
using namespace std;
 
int main() {
    setlocale(LC_ALL, "Russian");
    int a, b;
    cout<<"A:";
    cin>>a;
    cout << "B:";
    cin >> b;
 
    int i, i2;
    for (i = 1; i <= b - a + 1; ++i) {
        for (i2 = 1; i2 <= i; ++i2)
            cout << a + i - 1 << " ";
    }
 
    return 0;
}
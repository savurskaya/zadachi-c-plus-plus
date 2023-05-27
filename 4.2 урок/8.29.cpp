// самостоятельная работа 4 базовый задание 8.29


#include <iostream>
using namespace std;

int main() {
    int a, b, k;
    cout << "Enter a, b, k: ";
    cin >> a >> b >> k;
    for (int i = a; i <= b; i++) {
        int count = 0;
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                count++;
            }
        }
        if (count == k) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}
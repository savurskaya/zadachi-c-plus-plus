// самостоятельная работа 4 базовый задание 8.27


#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 300; i++) {
        int count = 0;
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                count++;
            }
        }
        if (count == 5) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}
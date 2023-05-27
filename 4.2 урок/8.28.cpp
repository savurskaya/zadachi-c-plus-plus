// самостоятельная работа 4 базовый задание 8.28


#include <iostream>
using namespace std;

int main() {
    for (int i = 200; i <= 500; i++) {
        int count = 0;
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                count++;
            }
        }
        if (count == 6) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}
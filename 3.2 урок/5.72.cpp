// 3 урок баз. 5.72

#include <iostream>
using namespace std;

int main() {
    double distance = 10; 
    for (int i = 2; i <= 10; i++) { 
        distance *= 1.1; 
        cout << "Пробег за " << i << " день: " << distance << " км" << endl;
    }
    return 0;
}
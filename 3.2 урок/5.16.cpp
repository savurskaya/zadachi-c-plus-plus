// сам.раб. 3 баз 5.16

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    for (int i = 2; i <= 20; i++) {
        double result = pow(sin(i), 2);
        cout << "sin^2(" << i << ") = " << result << endl;
    }
    return 0;
}

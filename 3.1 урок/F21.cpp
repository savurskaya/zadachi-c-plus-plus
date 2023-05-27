//F21, 3 урок
```
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int N;
    double sum = 0, factorial = 1;
    cin >> N;

    for (int i = 1; i <= N; i++) {
        factorial *= i;
        sum += 1 / factorial;
    }

    cout << "Sum: " << sum << endl;
    cout << "Approximation of e: " << exp(1) << endl;

    return 0;
}
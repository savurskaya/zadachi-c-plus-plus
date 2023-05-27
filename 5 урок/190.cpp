// Урок 5 базовая с/р 190

#include <iostream>

using namespace std;

double Procent(double num, double percent) {
    return num * (percent / 100.0);
}

int main() {
    double num = 100.0;
    double percent = 20.0;
    double result = Procent(num, percent);
    cout << percent << "% от " << num << " = " << result << endl;
    return 0;
}

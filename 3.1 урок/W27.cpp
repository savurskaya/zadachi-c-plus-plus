// Урок 3 базовая с/р W27

#include <iostream>

using namespace std;

int main() {
int N, F1 = 0, F2 = 1, Fk = 0, K = 0;
cout << "Enter N: ";
cin >> N;

while (Fk != N) {
    Fk = F1 + F2;
    F1 = F2;
    F2 = Fk;
    K++;
}

cout << "K = " << K << endl;

return 0;
}
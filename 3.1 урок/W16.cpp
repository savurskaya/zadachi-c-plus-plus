//3-----W16

#include <iostream>
using namespace std;
 
int main() {
    setlocale(LC_ALL, "Russian");
    float p;
    cout << "P:";
    cin >> p;
    int k = 1;
    float d = 10, s = 10;
    while (s <= 200) {
        ++k;
        d += d * p / 100;
        s += d;
    }
    cout<<"k:"<<k<<endl<<"nS:"<< s;
    return 0;
}


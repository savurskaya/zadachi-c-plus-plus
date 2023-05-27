// Урок 3 базовая с/р W2

#include <iostream>
using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;
    int count = 0; 
    while (A >= B) { 
        A -= B; 
        count++; 
    }
    cout << count << endl;
    return 0;
}

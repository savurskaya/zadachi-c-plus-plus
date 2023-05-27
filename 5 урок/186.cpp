//Занятие5, задание 186
#include <iostream>
using namespace std;
int max(int a, int b);
int main(void)
{ int m, k, i;
cout << "i = "; cin >> i;
cout << "k = "; cin >> k;
cout << "max = " << m << endl;
}
int max(int a, int b)
{ if (a > b) return a;
else return b;
}

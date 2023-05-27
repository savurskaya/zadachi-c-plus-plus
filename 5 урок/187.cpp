//Занятие5, задание 187
#include <iostream>
using namespace std;
int max(int a, int b);
int main(void)
{ int  k, i;
char m;
cout << "i = "; cin >> i;
cout << "k = "; cin >> k;
m = max(i, k); 
cout << "max = " << m << endl;
}
int max(int a, int b)
{ if (a > b) return '>';
  if (b> a) return ',';
  else return '=';
}

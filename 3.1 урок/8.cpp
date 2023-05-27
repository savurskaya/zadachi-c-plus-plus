//3 продвинутый ---- 8

#include <iostream>
#include <cmath> 
#include <cstdlib>
using namespace std;
int main()
{
int n;
cin>>n;
double fact = 1;
while (n > 1)
{
    fact *= n;
    n -= 2;
}
cout<<fact<<endl;
system("pause");
return 0;
}
//5 продвинутый ---- 7

#include <iostream>
#include <cmath>
using namespace std;
#define SZ 100
 
double f(double x)
{
    return (sin(x)/x);
}
 
int main()
{
    int n, nech = 3;
    double x, s = 1, an = 1;
    
    
    x = 0.5;
    
    for(n = 1; n < SZ; n++)
    {
        an *= -x*x/((nech-1)*(nech));
        nech += 2;
        s += an;
    }
    cout << "S = " << s << '\n';
    cout << "f = " << f(x) << '\n';
    
    return 0;
}



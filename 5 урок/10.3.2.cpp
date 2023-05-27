//сам раб 5 баз 10.3.2
#include <iostream>
using namespace std;
double max(double x, double y){
    if (x > y)
        return x;
    else
        return y;
}
int main()
{
    double a, b;
    cin >> a >> b;
    cout << (max(a, (2 * b)) * max((2 * a - b), b)) << endl;
    system("pause");
    return 0;
}
//сам раб 5 баз 10.3.1
#include <iostream>
 
using namespace std;
int main()
{
    double a, b, z;
    cin >> a >> b;
    if (a > (2 * b)){
        z = a;
    }
    else {
        z = (b * 2);
    }
    if ((2 * a - b) > b){
        z *= (2 * a - b);
    }
    else {
        z *= b;
    }
    cout << z << endl;
    system("pause");
    return 0;
}

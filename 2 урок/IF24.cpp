//сам раб 2(if24)

#include <iostream>
#include <cmath>
using namespace std;
double func(double x){
    if (x > 0) {
        return 2 - sin(x);
    } else {
        return 6 - x;
    }
}
int main() {
    double x = 2.5;
    cin >> x; 
    double result = func(x); 
    cout << "f(" << x << ") = " << result << endl; 
    return 0;

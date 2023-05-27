//самостоятельная базовая 3, №5.88


#include <iostream>
using namespace std;

int main() {
    int n;
    int result = 0;
    int start, end = 0;
    
    cout << "Введите натуральное число для возведения в третью степень: ";
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        start = end + 1;
        end = start + 2 * i - 2;
        
        for (int j = start; j <= end; j += 2) {
            result += j;
        }
    }
    
    cout << "Результат возведения в третью степень: " << result << endl;
    
    return 0;
}

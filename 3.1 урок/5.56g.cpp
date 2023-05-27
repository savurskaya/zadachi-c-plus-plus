//сам работа 3 базовый(5.56г)



#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;  
    cout << "Please input n";
    cin >> n;        
    int arr[n];       
    for (int i = 0; i < n; i++) {
        cin >> arr[i];   
        if (i % 2 == 0) {  
            sum += arr[i];
        } else {
            sum -= arr[i];
        }
    }
    cout << sum << endl;  
    return 0;   
}

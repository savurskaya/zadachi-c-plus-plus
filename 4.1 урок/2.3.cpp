//4 базовый ---- 2.3

#include <cmath> 
#include <iostream> 
using namespace std; 
int main() { 
    const size_t n = 11; 
    cout << ">>> "; 
    int box[n]{}; 
    for (auto& x : box) cin >> x; 
    auto sum = 0.0; 
    for (auto x : box) sum += x; 
    auto avg = sum / n; 
    cout << "Average: " << avg << '\n'; 
    size_t count = 0; 
    for (auto x : box) if (fabs(x) > avg) ++count; 
    cout << "Count: " << count << '\n'; 
}
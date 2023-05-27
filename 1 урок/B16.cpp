//самостоятельная базовая 1, №B16


#include <cmath>
using namespace std;

int main() {
    double x1, x2, distance;
    
    cout << "Введите координату первой точки (x1): ";
    cin >> x1;
    
    cout << "Введите координату второй точки (x2): ";
    cin >> x2;
    
    distance = abs(x2 - x1);
    
    cout << "Расстояние между двумя точками: " << distance << endl;
    
    return 0;
}

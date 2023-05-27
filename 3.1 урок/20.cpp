//сам раб 3 прод 20

#include <iostream>
#include <cmath>
#include <random>

using namespace std;

double f(double x, double y) 
{
    if (y <= x * x && y <= 1 && x * x + y * y >= 0) 
        return 1;
    else
        return 0;
}

int main()
{
    const double exactValue = 88.0 / 105.0; 
    const int N = 1000000; 
    double V = 0; 

    random_device rd; 
    mt19937 gen(rd());
    uniform_real_distribution<> dis(-1, 1); 
    for (int i = 0; i < N; i++)
    {
        double x = dis(gen);
        double y = dis(gen);
        V += f(x, y);
    }

    V *= 4.0 / N;
    cout << "Оценка объема: " << V << endl;
    cout << "Точное значение: " << exactValue << endl;

    return 0;
}

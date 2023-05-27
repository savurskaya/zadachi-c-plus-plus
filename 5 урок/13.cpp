//самостоятельная продвинутая 5, 13

#include <iostream>
#include <cmath>
using namespace std;

double rms(double arr[], int n, int start = 0, int end = -1)
{
    if (end == -1) 
    {
        end = n;
    }
    double sum = 0;
    for (int i = start; i < end; i++) 
    {
        sum += pow(arr[i], 2);
    }
    return sqrt(sum / (end - start));
}

int main() 
{
    const int SIZE = 5;
    double arr[SIZE] = {1, 2, 3, 4, 5};
    cout << "Среднеквадратичное значение для всего массива: " << rms(arr, SIZE) << endl;
    cout << "Среднеквадратичное значение для первых трех элементов: " << rms(arr, SIZE, 0, 3) << endl;
    return 0;
}

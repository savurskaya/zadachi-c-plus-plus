//сам раб 3 баз 5.44
#include <iostream>
using namespace std;

int main() 
{
    int weight[10];
    int total_weight = 0;

    for (int i = 0; i < 10; i++) {
        cout << "Введите массу предмета " << i+1 << ": ";
        cin >> weight[i];
    }

    for (int i = 0; i < 10; i++) {
        total_weight += weight[i];
    }

    cout << "Общая масса груза: " << total_weight << endl;

    return 0;
}
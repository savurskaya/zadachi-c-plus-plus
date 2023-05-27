//сам раб 4 баз (4.17)

#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{
    int a[5][5];
    int maxElement = 0;

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            a[i][j] = rand() % 20 - 10; 
            cout << a[i][j] << "\t";
            if(abs(a[i][j]) > maxElement) {
                maxElement = abs(a[i][j]);
            }
        }
        cout << endl;
    }

    cout << endl << "Max element: " << maxElement << endl << endl;

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            a[i][j] = round(a[i][j] / (double)maxElement * 100) / 100.0; 
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}

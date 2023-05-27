// сам раб 4 баз 8.4 г

#include <iostream>

using namespace std;

int main() {

    int num = 20; 

    for (int i = 5; i >= 1; i--) { 

        for (int j = num; j <= num+i-1; j++) { 

            cout << j << " ";

        }

        num--;

        cout << endl;

    }

    return 0;

}
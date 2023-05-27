// Урок 4 базовая с/р 3.30

#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m; 
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j]; 
        }
    }

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i][1] >= 0)  {
            count++;  }
    }

    cout << count << endl; 
    return 0;
}

//сам раб 4 баз (4.18)


#include <iostream>
using namespace std;

int main()
{
    const int M = 5;
    const int N = 4;
    int a[M][N] = {{3, 1, 4, 6}, {7, 2, 5, 8}, {9, 10, 12, 11}, {13, 16, 15, 14}, {18, 17, 20, 19}};

    for (int j = 0; j < N; j++)
    {
        if (j % 2 == 0) 
        {
            for (int i = 0; i < M - 1; i++)
            {
                for (int k = i + 1; k < M; k++)
                {
                    if (a[i][j] > a[k][j])
                    {
                        int temp = a[i][j];
                        a[i][j] = a[k][j];
                        a[k][j] = temp;
                    }
                }
            }
        }
        else 
        {
            for (int i = 0; i < M - 1; i++)
            {
                for (int k = i + 1; k < M; k++)
                {
                    if (a[i][j] < a[k][j])
                    {
                        int temp = a[i][j];
                        a[i][j] = a[k][j];
                        a[k][j] = temp;
                    }
                }
            }
        }
    }
    
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}



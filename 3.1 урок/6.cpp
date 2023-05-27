//6, занятие3
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float x, i , j;
	cin >> x;
	int n = 10;
	float t = 0;
	float f = 1;
	for (i = 0; i <= n; i++)
	{
		t += pow(-1, i)* pow(x, 2 * n) / f;
		f = 1;
		for (j = 0; j <= i; j++) 
		{
			f *= 2 * i + 1;
		}
	}
	cout << t;
}

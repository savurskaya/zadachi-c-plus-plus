//8.30, занятие4
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a, b, i, j;
	cin >> a >> b;
	int c = b + 1 - a;
	int count = 0;
	int d = 0;
	int v = 0;
	for (i = a; i <= b; i++)
	{
		if (count > d)
		{
			d = count;
			v = i;

		}
		count = 0;
		for (j = 1; j <= i; j++)
		{

			if (i % j == 0) 
			{
				count += 1;
			}
		}
	}
	cout << v -1;
}

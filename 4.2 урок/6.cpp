//6, занятие4
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int i;
	int a[10];

	for (i = 0; i < 10; i++)
	{
		cin >> a[i];
		
	}
	int m = a[0];
	for (i = 0; i < 9; i++)
	{
		if (a[i] < a[i + 1])
		{
			m = a[i+1];
		}

	}
	cout << m;

}

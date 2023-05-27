//5.34, занятие3
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float n = 1;
	int j;
	float i;
	float c = 0;



	for (i = 0; i <= 8; i++)
	{
	
		c += 1 / n;
		n = 1;
		for (j = 1; j <= i; j++)
		{
			n *= 3;

		}
	
	}
	cout << c;
}

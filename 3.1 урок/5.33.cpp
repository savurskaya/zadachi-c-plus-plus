//5.33, занятие3
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float n;
	cin >> n;
	float i;
	float c = 0;



	for (i = 2.0; i <= 10; i++)
	{
		c += i / (i + 1);
	}
	cout << c;
}

//5.31, занятие3
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int i;
	int a;

	int c = 0;
	cin >> a;
	int b = a * 2;


	for (i = a; i < b + 1; i++)
	{
		c += i * i;
	}
	cout << c;
}

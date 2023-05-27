//W18, занятие3
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int i = 0;
	int count = 0;
	int t = 0;
	int a = 10;
	while (n != 0)
	{
		t += n % 10;
		n = n / 10;
		count += 1;
		
	}
	cout << count << endl << t;
}

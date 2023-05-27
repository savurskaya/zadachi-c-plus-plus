//Самостоятельная работа 4 базовый № 3.3
#include <iostream>
using namespace std;

int main() {
	int arr[5][6] = {{1, -2, 3, -4, 5, -6},
	{7, -8, 9, -10, 11, -12},
	{13, -14, 15, -16, 17, -18},
	{19, -20, 21, -22, 23, -24},
	{25, -26, 27, -28, 29, -30}};
	double mean[6] = {0}; 
	int count[6] = {0}; 
	for (int j = 0; j < 6; j++) {
	for (int i = 0; i < 5; i++) {
		if (arr[i][j] > 0) {
			mean[j] += arr[i][j];
			count[j]++;
		}
	}
		if (count[j] > 0) {
		mean[j] /= count[j];
		}
	}
		
		for (int j = 0; j < 6; j++) {
		cout << "Mean of column " << j+1 << ": " << mean[j] << endl;
		}

return 0;
}


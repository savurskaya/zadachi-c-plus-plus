//Самостоятельная работа 4 базовый № 3.6
#include <iostream>
using namespace std;

int main() {
	const int ROWS = 4;
	const int COLS = 3;
	int A[ROWS][COLS] = {{8, 7, 3}, {4, 5, 6}, {7, 5, 9}, {1, 5, 9}};
	
	cout << "Array befor sorted: " << endl;
	for (int i = 0; i < ROWS; i++ ) {
		for(int j = 0; j < COLS; j++){
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
	
	int maxIndex1 = 0;
	int maxIndex3 = 0;
	for (int i = 1; i < ROWS; i++) {
		if (A[i][0] > A[maxIndex1][0]) {
			maxIndex1 = i;
		}
		if (A[i][2] > A[maxIndex3][2]) {
			maxIndex3 = i;
		}
	}
	
	int temp = A[maxIndex1][0];
	A[maxIndex1][0] = A[maxIndex3][2];
	A[maxIndex3][2] = temp;
	
	cout << "Array after sorted: " << endl;
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
	
	return 0;
}


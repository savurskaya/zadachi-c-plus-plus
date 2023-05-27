//Самостоятельная работа 3 базовый 5.75
#include <iostream>
int main(){
	int a = 2;
	int sum = 0;
	for(int i = 1; i < 10; i++){
		a *= 2;
		sum += a;
	}
	std::cout << sum;
}
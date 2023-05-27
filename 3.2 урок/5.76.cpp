//Самостоятельная работа 3 базовыйь№ 5.76
#include <iostream>

int main(){
	int a;
	std::cout << "Enter a: ";
	std::cin >> a;
	int a_n = a;
	int n;
	std::cout << "Enter n: ";
	std::cin >> n;
	if (n <= 1){
		std::cout << "Error";
		return 0;
	}
	std::cout << a << " in 1 = " << a_n << std::endl;
	for(int i = 2; i <= n; i++){ 
		a_n *= a;
		std::cout << a << " in " << i << " = " << a_n << std::endl;	
	}
	return(0);
}

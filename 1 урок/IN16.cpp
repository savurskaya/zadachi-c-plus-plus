// сам раб 1 баз in16

#include <iostream>
using namespace std;

int main() {
    int num, hundreds, tens, ones, newNum;
    cout << "Enter a three-digit number: ";
    cin >> num;
    hundreds = num / 100; 
    tens = (num / 10) % 10;
    ones = num % 10; 
    newNum = hundreds * 100 + ones * 10 + tens; 
    cout << "New number: " << newNum << endl;
    return 0;
}

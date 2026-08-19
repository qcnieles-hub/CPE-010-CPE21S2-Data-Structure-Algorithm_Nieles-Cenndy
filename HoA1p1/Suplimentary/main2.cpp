#include <iostream>
using namespace std;

int main() {
	
	int num1, num2, num3 , temp;
	
	cout << "Enter first number: ";
	cin >> num1;
	
	cout << "Enter second number: ";
	cin >> num2;
	
	cout << "\nBefore swapping:" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
	
	// Swap the values
	
	temp = num1;
	num1 = num2;
	num2 = num3;
	
	cout << "\nAfter swapping:" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
	
	return 0;
}

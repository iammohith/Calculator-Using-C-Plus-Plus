#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	float num1, num2;
	char op;
	
	cout << "Enter operator either + or - or * or /: ";
	cin >> op;
	
	cout << "Enter the first number:" ;
	cin >> num1;
	
	cout << "Enter the second number:" ;
	cin >> num2;
	
	switch(op)
	{
		case '+':
			cout << num1 << "+" << num2 << "=" << num1 + num2 << endl;
			break;
		
		case '-':
			cout << num1 << "-" << num2 << "=" << num1 - num2 << endl;
			break;
		
		case '*':
			cout << num1 << "*" << num2 << "=" << num1 * num2 << endl;
			break;
		
		case '/':
			cout << num1 << "/" << num2 << "=" << num1 / num2 << endl;
			break;
		
		default:
			cout << "Error! operator is not correct" << endl;
			break;	
	}
	
	return 0;
}

#include<iostream>
#include "Calculator.h"
using namespace std;
int main()
{
	int a,b;
	char op;
	cout << "Enter 1st Number: ";
	cin >> a;
	cout << "Enter 2nd Number: ";
	cin >> b;
	cout << "Enter operater for which you want to perform operation: ";
	cin >> op;
	Calculator Cal1(a,b);
	switch(op)
	{	
	case '+':
		Cal1.add();
		break;
	case '-':
		Cal1.substract();
		break;
	case '*':
		Cal1.multiply();
		break;
	case '/':
		Cal1.divide();
		break;
	default:
		cout << "Error! Invalid Oparation." << endl;
	}
	return 0;
}

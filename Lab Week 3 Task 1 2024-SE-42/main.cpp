#include <iostream>
#include "BankAccount.h"
using namespace std;
int main()
{
	BankAccount acc1(999.99);
	BankAccount acc2(acc1);
	cout << "Original Account: " << endl;
	acc1.display();
	cout << "Copied Account: " << endl;
	acc2.display();
	
	//Modified Changes
	acc2.setbalance(1999.99);
	cout << "After Modifying Acc2\n";
	cout << "Account 1: \n";
	acc1.display();
	cout << "Account 2: \n";
	acc2.display();
	
}

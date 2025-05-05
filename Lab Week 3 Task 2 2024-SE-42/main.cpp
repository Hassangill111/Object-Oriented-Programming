#include <iostream>
#include "BankAccountDC.h"
using namespace std;
int main()
{
	BankAccount acc1(999.99);
	BankAccount acc2(acc1);
	cout << "Original Account(acc1): " << endl;
	acc1.display();
	cout << "Copied Account(acc2): " << endl;
	acc2.display();
	
	//Modified Changes
	acc2.setbalance(1999.99);
	cout << "After Modifying Acc2\n";
	cout << "Account 1: \n";
	acc1.display();
	cout << "Account 2: \n";
	acc2.display();
}



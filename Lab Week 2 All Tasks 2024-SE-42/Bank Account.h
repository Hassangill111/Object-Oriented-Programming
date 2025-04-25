//Task 2 Bank Account
#include <iostream>
using namespace std;
class BankAccount
{
	private:
	string accountNumber;
	string accountHolder;
	float balance;
	public:
	BankAccount(string accnum, string acchold, float bal)
	{
		accountNumber = accnum;
		accountHolder = acchold;
		balance= bal;
	}
	void showAccountDetails()
	{
		cout << "Account Detials\n";
		cout << "Account Number: " << accountNumber << endl;
		cout << "Holder: " << accountHolder << endl;
		cout << "Balance: " << balance << endl;
	}
};

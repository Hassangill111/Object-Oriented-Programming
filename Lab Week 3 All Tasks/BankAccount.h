//Task 1 Bank Account
#include <iostream>
using namespace std;
class BankAccount
{
	private:
		float* balance;
	public:
		BankAccount( float bal )
		{
			balance = new float(bal);
		}
		~BankAccount()
		{
			cout << "Destructor called; memory freed\n";
		}
		setbalance( float bal)
		{
			*balance = bal;
		}
		void display() const
		{
			cout << "Balance: $" << *balance << endl;
		}
};

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

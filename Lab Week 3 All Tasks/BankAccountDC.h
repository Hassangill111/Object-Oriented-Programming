// Task 2 BankAccount
#include <iostream>
using namespace std;
class BankAccountDC
{
	private:
		float* balance;
	public:
		//
		BankAccountDC( float bal )
		{
			balance = new float(bal);
		}
		//Deep copy Constructor Allocating Dynamic Memory
		BankAccountDC( BankAccountDC& obj)
		{
			balance = new float(*(obj.balance));
		}
		//Deep copy Constructor For Not deleting double memory for single assignment for case initialization acc2(acc1)
		BankAccountDC& operator=(BankAccountDC& obj)
		{
			if(this != &obj)
			{
				delete balance;
				balance = new float(*(obj.balance));
			}
			return *this;
		}
		~BankAccountDC()
		{
			cout << "Destructor called; memory freed\n";
		}
		setbalance( float bal)
		{
			*balance += bal;
		}
		void display() const
		{
			cout << "Balance: $" << *balance << endl;
		}
};

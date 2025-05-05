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
		//Deep copy Constructor Allocating Dynamic Memory
		BankAccount( BankAccount& obj)
		{
			balance = new float(*(obj.balance));
		}
		//Deep copy Constructor For Not deleting double memory for single assignment for case initialization acc2(acc1)
		BankAccount& operator=(BankAccount& obj)
		{
			if(this != &obj)
			{
				delete balance;
				balance = new float(*(obj.balance));
			}
			return *this;
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

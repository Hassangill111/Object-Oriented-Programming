#include<iostream>
using namespace std;
class Locker
{
	public:
	// Construtor
	Locker()
	{
		cout << "Locker allocated to customer." << endl ;
	}
	//Destructor
	~Locker()
	{
		cout << "Locker returned by customer." << endl ;
	}
};

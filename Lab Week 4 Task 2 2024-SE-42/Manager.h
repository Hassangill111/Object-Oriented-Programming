#include<iostream>
using namespace std;
class Manager : public Employee
{
public:
	string department;
	void display_manager()
	{
		display_employee();
		cout << "Department: " << department << endl;
	}
};

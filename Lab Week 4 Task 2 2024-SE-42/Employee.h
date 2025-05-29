#include<iostream>
using namespace std;
class Employee : public Person
{
public:
	string employee_id;
	void display_employee()
	{
		display_person();
		cout << "Employee ID: " << employee_id << endl;
	}
};

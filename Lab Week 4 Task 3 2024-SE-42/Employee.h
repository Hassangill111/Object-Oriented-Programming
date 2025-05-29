#include<iostream>
using namespace std;
class Employee
{
	public:
		string name;
		double salary;
		void display_employee()
		{
			cout << "Name: " << name << endl;
			cout << "Salary: $" << salary << endl;
		}
};

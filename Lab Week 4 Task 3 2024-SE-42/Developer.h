#include<iostream>
using namespace std;
class Developer : public Employee
{
	public:
		string programming_language;
		void display_developer()
		{
			display_employee();
			cout << "Programming Language: " << programming_language << endl;
		}
};

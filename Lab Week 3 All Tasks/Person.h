//Task 3 1.Person
#include <iostream>
using namespace std;
class Person
{
	public:
		string name;
		int age;
		void setPerson( string n, int a )
		{
			name = n;
			age = a;
		}
		void showPerson()
		{
			cout << "Name: " << name << endl;
			cout << "Age: " << age << endl;
		}
};

#include<iostream>
using namespace std;
class Person
{
	public:
	string name;
	int age;
	
	void display_person_info()
	{
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
	}
};

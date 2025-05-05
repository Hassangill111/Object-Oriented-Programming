//Task 3 2.Student
#include <iostream>
using namespace std;
class Student: public Person
{
	public:
	int rollNo;
	
	void setStudent(string n, int a, int rn)
	{
		setPerson(n,a);
		rollNo = rn;
	}
	void showStudent()
	{
		showPerson();
		cout << "Roll No: " << rollNo << endl;
	}
};

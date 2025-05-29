#include<iostream>
using namespace std;
class Student : public Person
{
	public:
	int student_id;
	void display_student_info()
	{
		display_person_info();
		cout << "Student Id: " << student_id << endl;
	}
};

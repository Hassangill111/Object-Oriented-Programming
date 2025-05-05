#include <iostream>
#include "Person.h"
#include "Student.h"
using namespace std;
int main()
{
	//object evolving parent class
	cout << "Parent class\n";
	Person p1;
	p1.setPerson("Hassan",18);
	p1.showPerson();
	//object evolving child class
	cout << "\nStudent class\n";
	Student s1;
	cout << "\nUsing Person object and displaying output with both" << endl;
	s1.setPerson("Hanan", 18);
	cout << "\nNo1:\n";
	s1.showPerson();
	cout << "\nNo2:\n";
	s1.showStudent();
	cout << "\nUsing Student object and displaying output with both" << endl;
	s1.setStudent("Hassan", 20, 42);
	cout << "\nNo1:\n";
	s1.showPerson();
	cout << "\nNo2:\n";
	s1.showStudent();
	return 0;
}

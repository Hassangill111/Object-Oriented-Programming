#include<iostream>
#include "Person.h"
#include "Student.h"
using namespace std;
int main()
{
	Student s1;
	s1.name = "Hassan Gillani";
	s1.age = 20;
	s1.student_id = 42;
	
	cout << "Student Information: \n";
	s1.display_student_info();
}

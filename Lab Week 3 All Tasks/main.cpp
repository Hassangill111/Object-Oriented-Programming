//Main.cpp
#include <iostream>
#include "BankAccount.h"
#include "BankAccountDC.h"
#include "Person.h"
#include "Student.h"
#include "Shape.h"
#include "Rectangle.h"
using namespace std;
//Task 1
//int main()
//{
//	BankAccount acc1(999.99);
//	BankAccount acc2(acc1);
//	cout << "Original Account(acc1): " << endl;
//	acc1.display();
//	cout << "Copied Account(acc2): " << endl;
//	acc2.display();
//	
//	//Modified Changes
//	acc2.setbalance(1999.99);
//	cout << "After Modifying Acc2\n";
//	cout << "Account 1: \n";
//	acc1.display();
//	cout << "Account 2: \n";
//	acc2.display();
//}

//Task 2
//int main()
//{
//	BankAccountDC acc1(999.99);
//	BankAccountDC acc2(acc1);
//	cout << "Original Account(acc1): " << endl;
//	acc1.display();
//	cout << "Copied Account(acc2): " << endl;
//	acc2.display();
//	
//	//Modified Changes
//	acc2.setbalance(1999.99);
//	cout << "After Modifying Acc2\n";
//	cout << "Account 1: \n";
//	acc1.display();
//	cout << "Account 2: \n";
//	acc2.display();
//}
//Task 3
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

//Task 4
//int main()
//{
//	Rectangle R1;
//	return 0;
//}

#include <iostream>
#include"Employee.h"
#include"Bank Account.h"
#include"Rectangle.h"
#include"Locker.h"
using namespace std;

////Task 1
int main()
{
	Employee emp1;
	emp1.displaydata();
	return 0;
}
////Task 2
//int main()
//{
//	BankAccount Acc1("K0309800780100","Muhammad Awais", 10000);
//	Acc1.showAccountDetails();
//	return 0;
//}
//Task 3
//int main()
//{
//	Rectangle R1;
//	cout << "(Default Constructor)\n";
//	R1.area();
//	
//	Rectangle R2(2,13);
//	cout << "(Parameterized Constructor)\n";
//	R2.area();
//	
//	Rectangle R3(2);
//	cout << "(Single-Parameter Constructor)\n";
//	R3.area();
//	return 0;
//}
//Task4
//int main()
//{
//	//stack object creation by system 
//	//executing and ending stack object for constructur and destructor at the same time
//	{
//		Locker L1;
//	}
//	
//	//heap object creation by allocating dynamic memory
//	//executing and ending heap object for constructur and destructor at the same time
//	{
//		Locker* L2 = new Locker();
//		delete L2;
//	}
//	return 0;	
//}

#include<iostream>
#include "Person.h"
#include "Employee.h"
#include "Manager.h"
using namespace std;
int main()
{
	Manager M1;
	M1.name = "Hassan Gillani";
	M1.age = 20;
	M1.employee_id = "NAsesA1234";
	M1.department = "Sales";
	M1.display_manager();
}

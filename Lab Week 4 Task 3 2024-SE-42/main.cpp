#include<iostream>
#include "Employee.h"
#include "Developer.h"
#include "Designer.h"
using namespace std;
int main()
{
	Developer Dev1;
	cout << "Object 1 Developer\n";
	Dev1.name = "Hassan";
	Dev1.salary = 10000;
	Dev1.programming_language = "C++";
	Dev1.display_developer();
	
	Designer Des1;
	cout << "\nObject 2 Designer\n";
	Des1.name = "Malik";
	Des1.salary = 5000;
	Des1.design_tool = "Designer Pro";
	Des1.display_designer();
}

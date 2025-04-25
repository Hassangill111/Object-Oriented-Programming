#include<iostream>
#include "Rectangle.h"
using namespace std;
int main()
{
	Rectangle R1;
	cout << "(Default Constructor)\n";
	R1.area();
	
	Rectangle R2(2,13);
	cout << "(Parameterized Constructor)\n";
	R2.area();
	
	Rectangle R3(2);
	cout << "(Single-Parameter Constructor)\n";
	R3.area();
	return 0;
}

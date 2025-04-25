#include<iostream>
#include "rectangle.h"
using namespace std;

int main()
{
	Rectangle R1;
	R1.setdimensions(10,10);
	cout << "Area of Rectangle: " << R1.area() << endl;
	cout << "Perimieter of Rectangle: " << R1.perimeter() << endl;
	
	Rectangle R2;
	R2.setdimensions(30,20);
	cout << "Area of Rectangle: " << R2.area() << endl;
	cout << "Perimeter of Rectangle: " << R2.perimeter() << endl;
	return 0;
}

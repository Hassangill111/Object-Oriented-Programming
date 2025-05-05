#include<iostream>
using namespace std;
class Rectangle:public Shape
{
	public:
	Rectangle()
	{
		cout << "Rectangle constructor is called.\n";
	}
};

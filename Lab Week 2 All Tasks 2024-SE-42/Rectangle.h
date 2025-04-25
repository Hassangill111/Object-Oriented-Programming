//Task 3 Rectangle
#include<iostream>
using namespace std;
class Rectangle
{
	private:
		float length;
		float width;
	public:
		Rectangle()
		{
			length = 1.0;
			width = 1.0;
		}
		Rectangle(float l, float w)
		{
			length = l;
			width = w;
		}
		Rectangle(float size)
		{
			length = width = size;
		}
		void area()
		{
			cout << "Length: " << length << ", Width : " << width << endl;
			cout << "Area of Rectangle: " << length * width << endl<< "\n";
		}
};

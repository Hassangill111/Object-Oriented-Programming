#include<iostream>
using namespace std;
class Designer : public Employee
{
	public:
		string design_tool;
		void display_designer()
		{
			display_employee();
			cout << "Design Tool: " << design_tool << endl;
		}
};

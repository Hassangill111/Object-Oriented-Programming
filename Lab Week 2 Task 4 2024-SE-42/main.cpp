#include<iostream>
#include"Locker.h"
using namespace std;

int main()
{
	//stack object creation by system 
	//executing and ending stack object for constructur and destructor at the same time
	{
		Locker L1;
	}
	
	//heap object creation by allocating dynamic memory
	//executing and ending heap object for constructur and destructor at the same time
	{
		Locker* L2 = new Locker();
		delete L2;
	}
	return 0;	
}

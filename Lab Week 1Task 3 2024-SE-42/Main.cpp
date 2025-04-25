#include <iostream>
#include "Voter.h"
using namespace std;

int main()
{
	Voter voter1;
	voter1.name = "Hassan Gillani";
	cout << "Voter Name: " << voter1.name << endl;
	voter1.age = 20;
	cout << "Voter Name: " << voter1.age << endl ;
	voter1.isEligible(20);
	
	Voter voter2;
	voter2.name = "Musa Gillani";
	cout << "\nVoter Name: " << voter2.name << endl;
	voter2.age = 16;
	cout << "Voter Age: " << voter2.age << endl;
	voter2.isEligible(16);
	return 0;
}

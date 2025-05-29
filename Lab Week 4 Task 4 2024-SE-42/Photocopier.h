#include<iostream>
using namespace std;
class Photocopier : public Printer, public Scanner
{
	public:
		void photocopy()
		{
			print_document();
			scan_document();
			cout << "Photocopying document.\n";
		}
};

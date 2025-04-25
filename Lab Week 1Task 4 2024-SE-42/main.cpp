#include <iostream>
#include "Temperature.h"
using namespace std;
int main()
{
	Temperature Temp1;
	Temp1.Celcius = 70;
	Temp1.CelciustoFehrenhiet();
	cout << "Temperature in Celcius: " << Temp1.Celcius << "C" << endl;
	Temp1.ConvertedValue();
	return 0;
}

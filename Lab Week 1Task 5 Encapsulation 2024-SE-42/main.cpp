#include <iostream>
#include "Product.h"
using namespace std;
int  main()
{
	//test code
	Product p;
	p.setName("");
	p.setPrice(-50);
	p.setQuantity(-2);
	
	p.setName("Laptop");
	p.setPrice(50);
	p.setQuantity(5);
	
	cout << "Product: " << p.getName() << endl ;
	cout << "Price: $" << p.getPrice() << endl ;
	cout << "Quantity: " << p.getQuantity() << endl;
	return 0;
}


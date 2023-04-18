#include <iostream>
#include "billing.h"
#include "patient.h"
using namespace std;
using namespace employeessavitch;

int main()
{
	Doctor d1("Doc","69696",1500,"Physician",350);
	Patient p1("Kuki",d1);
	Billing bill1(p1,d1,350);
	Billing bill2(bill1);
	bill2.set_bill(450);
	
	cout << "Bill for bill 1 is: " << bill1.get_bill() << endl;
	
	cout << "Bill for bill 2 is: " << bill2.get_bill() << endl;
	
	
	return 0;
}

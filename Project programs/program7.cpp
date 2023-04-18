#include <iostream>
using namespace std;


int chocolate(int dollars, int coupon);


int main()
{
	cout << chocolate(26,0);
	
	
	return 0;
}


int chocolate(int dollars, int coupon)
{
	if(dollars > 0)
	{
		return 1 + chocolate(dollars - 1, coupon + 1);
	}
	else if((coupon / 7) > 0)
	{
		coupon = coupon - 7;
		return 1 + chocolate(dollars, coupon + 1);
	}
	else
	{
		cout << "Number of coupons left: " << coupon << endl;
		cout << "Number of chocolates: ";
		return 0;
	}
}

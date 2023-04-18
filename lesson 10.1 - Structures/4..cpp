#include <iostream>

using namespace std;

struct A
{
 int member_b;
 int member_c;
};



int main()
{
	A x = {1, 2};
	
	cout << x.member_b << endl << x.member_c << endl;
	
	return 0;
}


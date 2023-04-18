#include <iostream>
using namespace std;

int main()
{
	double one=1.000, two=1.414, three=1.732, four=2.000, five=2.236;
	
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(3);
	
	cout << "N\tSquare root\n\n1\t" << one << "\n\n2\t" << two << "\n\n3\t" << three << "\n\n4\t" << four << "\n\n5\t" << five << endl;
	
	return 0;
}

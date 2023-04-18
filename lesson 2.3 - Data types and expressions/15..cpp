#include <iostream>
using namespace std;

int main()
{
	double x, y, z;
	
	cout << "Enter te value of x: ";
	cin >> x;
	cout << "Enter te value of y: ";
	cin >> y;
	cout << "Enter te value of z: ";
	cin >> z;
	
	cout << "X: " << x << "\tY: " << y << "\tZ: " << z << endl;
	cout << "Formula 1: " << 3*x << endl;
	cout << "Formula 2: " << (3*x) + y << endl;
	cout << "Formula 3: " << (x+y) / 7 << endl;
	cout << "Formula 4: " << ((3*x) + y) / (z+2) << endl;
	
	return 0;	
}

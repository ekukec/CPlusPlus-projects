#include <iostream>
using namespace std;

int main()
{
	int count = 3;
	while (--count > 0)
 		cout << count << " ";
 		
 		
 	int a = 1;
	do
 		cout << a << " ";
	while (++a <= 3);
	cout << endl;
	
	int n;
	for (n = 1; n <= 10; n = n + 2)
 		cout << "n is now equal to " << n << endl;
	for (n = 0; n > -100; n = n - 7)
 		cout << "n is now equal to " << n << endl;
	for (double size = 0.75; size <= 5; size = size + 0.05)
 		cout << "size is now equal to " << size << endl;
 		
 		
 	for (int count2 = 1; count2 < 5; count2++)
 		cout << (2 * count2) << " ";
	
	return 0;
}

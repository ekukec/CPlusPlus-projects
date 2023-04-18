#include <iostream>
using namespace std;

int main()
{
	int cel = 100, far = 0, temp;
	
	while(cel != far)
	{
		far = ((9 * cel) / 5) + 32;
		cel--;
	}
	
	cout << cel << endl << far << endl;
	
	return 0;
}

#include <iostream>

using namespace std;


int main()
{
	int numDoubles, avg = 0;
	double *arr_ptr;
	
	cout << "How many doubles do u wish to enter: ";
	cin >> numDoubles;
	
	arr_ptr = new double[numDoubles];
	
	for(int i = 0; i < numDoubles; i++)
	{
		cout << "Enter number " << i + 1 << ": ";
		cin >> arr_ptr[i];
		avg = avg + arr_ptr[i];
	}
	
	cout << "Average: " << avg / numDoubles << endl;
	
	
	
	delete [] arr_ptr;
	
	return 0;
}

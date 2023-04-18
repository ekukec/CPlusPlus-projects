#include <iostream>

using namespace std;

void addOne(int *ptrNum);


int main()
{
	int number, *ptr;
	
	ptr = &number;
	
	cout << "Enter number: ";
	cin >> number;
	
	addOne(ptr);
	
	cout << "Number after addOne: " << *ptr << endl;
	
	
	return 0;
}

void addOne(int *ptrNum)
{
	*ptrNum = *ptrNum + 1;
}

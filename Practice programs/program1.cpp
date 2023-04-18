#include <iostream>

using namespace std;



bool firstLast2(int arr[], int num);



int main()
{
	int a[100], num = 0, many;
	char more;
	bool two = false;
	
	cout << "Enter how many numbers u wish to write: ";
	do
	{
		cin >> many;
		
	}while(many < 0);
	
	
	while(num < many)
	{
		cout << "Enter number " << num + 1 << ": ";
		cin >> a[num];
		num++;
		
	}
	
	if(firstLast2(a, num))
	{
		cout << "True" << endl;
	}
	else
	{
		cout << "False" << endl;
	}
	
	
	return 0;
}



bool firstLast2(int arr[], int num)
{
	bool two = false;
	
	for(int i = 0; i < num; i++)
	{
		if(i == 0 && arr[i] == 2)
		{
			two = true;
		}
		if(i == (num - 1) && arr[i] == 2)
		{
			two = true;
		}
	}
	
	return two;
}



#include <iostream>

using namespace std;



int countNum2(int arr[], int num);



int main()
{
	int a[100], num = 0, many;
	char more;
	
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
	
	cout << countNum2(a, num);

	
	
	return 0;
}



int countNum2(int arr[], int num)
{
	int two = 0;
	
	for(int i = 0; i < num; i++)
	{
		if(arr[i] == 2)
		{
			two++;
		}
	}
	
	return two;
}



#include <iostream>

using namespace std;

int main()
{
	char arr[10];
	int num = 0;
	
	for(int i = 0; i < 10; i++)
	{		
		cin >> arr[i];
		num++;
		if(arr[i] == '.')
		{
			i = 11;
			num = num -2;	
		} 			
	}
	
	cout << endl;
	
	for(int i = num; i >= 0; i--)
	{
		cout << arr[i]; 
	}
	
	cout << endl;
	
	return 0;
}

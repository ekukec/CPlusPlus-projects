#include <iostream>

using namespace std;

int main()
{
	int arr[10];
	
	for(int i = 0; i < 10; i++)
	{
		cout << "Enter num " << i + 1 << " : ";
		
		do
		{
			cin >> arr[i]; 
			
		}while(arr[i] < 0);	
	}
	
	for(int i = 0; i < 10; i++)
	{
		cout << "Number " << i +1 << " : " << arr[i] << endl; 
	}
	
	return 0;
}

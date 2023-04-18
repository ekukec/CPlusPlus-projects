#include <iostream>

using namespace std;

void echo(int arr[][5]);

int main()
{
	int a[4][5];
	
	for(int i = 0; i < 4; i++)
	{
		for(int j = 0; j < 5; j++)
		{
			cin >> a[i][j];
		}
		cout << endl;
	}
	
	echo(a);
	
	return 0;
}

void echo(int arr[][5])
{
	for(int i = 0; i < 4; i++)
	{
		for(int j = 0; j < 5; j++)
		{
			cout << arr[i][j];
		}
		cout << endl;
	}
}

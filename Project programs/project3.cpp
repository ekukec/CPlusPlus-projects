#include <iostream>

using namespace std;


void delete_repeats(char arr[], int& num);


int main()
{
	char a[100], del;
	int num;
	
	cout << "How many characters do you wish to enter? :";
	cin >> num;
	
	for(int i = 0; i < num; i++)
	{
		cout << "Enter character " << i + 1 << ": ";
		cin >> a[i];
	}
	
	delete_repeats(a, num);
	
	for(int i = 0; i < num; i++)
	{
		cout << a[i] << endl;
	}
	
	return 0;
}


void delete_repeats(char arr[], int& num)
{	
	for(int i = 0; i < num; i++)
	{
		for(int j = (i + 1); j < num; j++)
		{
			for(int y = 0; y < num; y++)
			{
				if(arr[i] == arr[j])
				{	
					for(int z = j; z < num; z++)
					{
						arr[z] = arr[z + 1];
					}
					num--;
				}
			}	
		}
	}

}

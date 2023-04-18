#include <iostream>
#include <cstdlib>
using namespace std;

template<class T>
void delete_repeats(T arr[], int& num)
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


int main()
{
	char a[100], del;
	int test[100];
	int num, num2 = 100;
	
	cout << "How many characters do you wish to enter? :";
	cin >> num;
	
	for(int i = 0; i < num; i++)
	{
		cout << "Enter character " << i + 1 << ": ";
		cin >> a[i];
	}
	
	for(int i = 0; i < num2; i++)
	{
		test[i] = rand() % 100;
		cout << i + 1 << ": " << test[i] << endl;
	}
	
	delete_repeats(a, num);
	delete_repeats(test, num2);
	
	for(int i = 0; i < num; i++)
	{
		cout << a[i] << endl;
	}
	
	for(int i = 0; i < num2; i++)
	{
		cout << test[i] << endl;
	}
	
	
	return 0;
}

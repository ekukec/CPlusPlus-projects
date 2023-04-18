#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;
int num;

void selection_sort(vector<int> arr);


int main()
{	
	cout << "Enter num: ";
	cin >> num;
	
	vector<int> a(num);
	
	for(int i = 0; i < num; i++)
	{
		a[i] = rand() % 101;
		cout << "Number " << i + 1 << ": " << a[i] << endl;
	}
	
	selection_sort(a);
	
	return 0;
}


void selection_sort(vector<int> arr)
{
	int temp;
	
	for(int i = 0; i < num; i++)
	{
		if(i > 0)
		{
			for(int j = i - 1; j >= 0; j--)
			{
				if(arr[j + 1] < arr[j])
				{
					temp = arr[j + 1];
					arr[j + 1] = arr[j];
					arr[j] = temp;
				}
			}
		}
	}
	
	cout << endl << endl << endl << endl;
	
	for(int i = 0; i < num; i++)
	{
		cout << "Number " << i + 1 << ": " << arr[i] << endl;
	}
}

#include <iostream>
#include <cstdlib>

using namespace std;
int num;

template<class T>
void selection_sort(T arr[])
{
	T temp;
	
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

int main()
{
	int a[100];
	char b[100];
	
	cout << "Enter num: ";
	cin >> num;
	
	for(int i = 0; i < num; i++)
	{
		a[i] = rand() % 101;
		cout << "Number " << i + 1 << ": " << a[i] << endl;
	}
	
	selection_sort(a);
	
	for(int i = 0; i < num; i++)
	{
		b[i] = 'a' + (rand() % 26);
		cout << "Char " << i + 1 << ": " << b[i] << endl;
	}
	
	selection_sort(b);
	
	
	return 0;
}




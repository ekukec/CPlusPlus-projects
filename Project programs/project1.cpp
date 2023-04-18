#include <iostream>

using namespace std;

void enter(int arr[], int& count);

void add(int arr1[], int arr2[], int count1, int count2);

int main()
{
	int *num1, *num2, how_many1, how_many2;
	
	
	
	
	cout << "Enter the number of digits the number will consist of:";
	do
	{
		cin >> how_many1;
			
	}while(how_many1 < 1);
	how_many1--;
	
	num1 = new int[how_many1];
	
	enter(num1, how_many1);
	
	
	
	
	
	
	cout << "Enter the number of digits the number will consist of:";
	do
	{
		cin >> how_many2;
			
	}while(how_many2 < 1);
	how_many2--;
	
	num2 = new int[how_many2];
	
	enter(num2, how_many2);
	
	
	
	
	add(num1, num2, how_many1, how_many2);
	
	return 0;
}


void enter(int arr[], int& count)
{	
	/*	
	cout << "Enter the number of digits the number will consist of:";
	do
	{
		cin >> count;
			
	}while(count < 1);
	count--;
	
	arr = new int[count];
	*/
	
	for(int i = count; i >= 0; i--)
	{
		if(i < count)
		{
			do
			{
				cout << "Digit " << (count + 1) - i << ": ";
				cin >> arr[i];
					
			}while(arr[i] < 0 || arr[i] > 9);
		}
		else
		{
			do
			{
				cout << "Digit " << (count + 1) - i << ": ";
				cin >> arr[i];
					
			}while(arr[i] < 1 || arr[i] > 9);
		}
	}
	
	cout << "The number u entered is: ";
	for(int i = count; i >= 0; i--)
	{
		cout << arr[i];
	}
	cout << endl;
}

void add(int arr1[], int arr2[], int count1, int count2)
{
	int overflow = 0, count, result[20], longer, shorter;
	bool write = true;
	
	if(count1 < count2)
	{
		shorter =  count1;
		longer = count2;
	}
	else
	{
		shorter =  count2;
		longer = count1;
	}
	
	for(int i = 0; i <= count1; i++)
	{
		cout << arr1[i];
	}
	cout << endl;
	for(int i = 0; i <= count2; i++)
	{
		cout << arr2[i];
	}
	cout << endl;
	
	cout << "Longer: " << longer << endl;
	
	for(int i = 0; i <= longer; i++)
	{
		if(shorter >= 0)
		{
			result[i] =  (arr1[i] + arr2[i] + overflow) % 10;
			overflow = 0;
			overflow =  (arr1[i] + arr2[i]) / 10;
			//cout << arr1[i] << " + " << arr2[i] << " = " << result[i] << endl;
			if((i == 19) && ((arr1[19] + arr2[19] + overflow) > 9))
			{
				cout << "Integer overflow" << endl;
				write = false;
				
			}
			shorter--;	
		}
		else
		{
			result[i] = (arr1[i] + arr2[i] + overflow) % 10;
			overflow =  (arr1[i] + arr2[i]) / 10;
			//cout << arr1[i] << " + " << arr2[i] << " = " << result[i] << endl;
			if((i == 19) && ((arr1[19] + arr2[19] + overflow) > 9))
			{
				cout << "Integer overflow" << endl;
				write = false;
			}
		}
	}
	
	if(write == true)
	{
		cout << "Result: ";
		for(int i = longer; i >= 0; i--)
		{
			cout << result[i];
		}
	}
}

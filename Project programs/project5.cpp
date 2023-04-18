#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

ifstream input;
ofstream output;
bool go = false;


void generate_file();

void array_file(int arr[], int& num);

void array_key(int arr[], int& num);

void how_many(int &num);

void display(int arr[], int& num);


int main()
{
	int a[50], choice, num;	
	
	do
	{
		cout << "=====================================================" << endl;
		cout << "1. Generate a file with 50 numbers" << endl;
		cout << "2. Load numbers from file into the array" << endl;
		cout << "3. Enter numbers into the array with the keyboard" << endl;
		cout << "4. Output the numbers" << endl;
		cout << "9. Exit" << endl;
		cout << "-----------------------------------------------------" << endl;
		cout << "Enter your choice: ";
		cin >> choice;
		cout << "=====================================================" << endl;
		
		switch(choice)
		{
			case 1: 
				generate_file();
				break;
				
			case 2: 
				array_file(a, num);
				break;
				
			case 3:
				array_key(a, num);
				break;
				
			case 4:
				display(a, num);
				break;
		}
		
	}while(choice != 9);
	
	return 0;
}


void generate_file()
{
	int num;
	output.open("project5.dat");
	
	for(int i = 0; i < 50; i++)
	{
		num = rand() % 101;
		output << num << endl;
	}
	
	output.close();
	
	cout << "Numbers are generated into the file" << endl;	
}

void array_file(int arr[], int& num)
{
	input.open("project5.dat");
	
	how_many(num);
	
	cout << "Num is: " << num << endl;
	
	for(int i = 0; i < num; i++)
	{
		input >> arr[i];
		cout << arr[i] << endl;
	}
	
	input.close();
	cout << "Array filled with " << num << " numbers!" << endl;
	
	go = true;
}

void array_key(int arr[], int& num)
{
	how_many(num);
	
	cout << "Num is: " << num << endl;
	
	for(int i = 0; i < num; i++)
	{
		cout << "Enter number " << i + 1 << ": ";
		cin >> arr[i];
	}
	
	cout << "Array filled with " << num << " numbers!" << endl;
	
	go = true;
}

void how_many(int &num)
{
	do
	{
		cout << "Enter how many numbers u wish to use: ";
		cin >> num;
		
	}while(num < 1 || num > 50);
}

void display(int arr[], int& num)
{
	int temp, copy = 0;
	
	cout << "Num is: " << num << endl;
	
	if(go == true)
	{
		for(int i = 0; i < num; i++)
		{
			for(int j = 0; j < num; j++)
			{
				if(arr[j] > arr[i])
				{
					temp = arr[j];
					arr[j] = arr[i];
					arr[i] = temp;
				}
			}
		}
	}
	else
	{
		cout << "The array has not been filled with any numbers!" << endl;
	}
	
	for(int i = 0; i < num; i++)
	{
		cout << arr[i] << endl;
	}
	
	for(int i = 0; i < num; i++)
	{
		for(int j = i + 1; j < num; j++)
		{
			if(arr[j] == arr[i])
			{
				copy++;
			}
		}
		
		cout << arr[i] << " copies: " << copy << endl;
		if(copy > 0)
		{
			i =  i + copy;
			copy = 0;
		}
		
	}
}

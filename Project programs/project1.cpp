#include <iostream>
#include <fstream>
#include <cstring>
#include <iomanip>

using namespace std;

void enter();

void get(int arr2[]);

void compare(int arr[], string month[]);

int avg(int arr[]);

int main()
{
	int rainfall[12];
	string month[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
	
	
	cout << "Enter the average rainfall for all months" << endl;
	for(int i = 0; i < 12; i++)
	{
		cout << "Enter the average rainfall for the month of " << month[i] << " :";
		cin >> rainfall[i];
	}
	cout << endl << endl << endl << endl;
	
	
	//enter();
	
	compare(rainfall, month);
	
	return 0;
}

void enter()
{
	ofstream output;
	
	int rain;
	
	output.open("rainfall.dat");
	for(int i = 0; i < 12; i++)
	{
		cout << "Enter rainfall for month " << i + 1 << ": ";
		cin >> rain;
		output << rain << endl;
	}
	output.close();
}

void get(int arr2[])
{
	ifstream input;
	
	input.open("rainfall.dat");
	for(int i = 0; i < 12; i++)
	{
		input >> arr2[i];
	}
	input.close();
}

void compare(int arr[], string month[])
{
	int arr2[12];
	int average;
	
	get(arr2);
	average = avg(arr);
	
	cout << "=============================" << endl << "Average for this year is: " << average << endl << "=============================" << endl;
	
	cout << setw(10) << "Month" << setw(28) << "Current rainfall" << setw(20) << "Previous year" << setw(20) << "Avg difference" << endl;
	cout << "==============================================================================" << endl;
	for(int i = 0; i < 12; i++)
	{
		cout << setw(10) << month[i] << setw(22) << arr[i] << setw(20) << arr2[i] << setw(20) << arr[i] - average << endl;
	}
	
}

int avg(int arr[])
{
	int average = 0;
	
	for(int i = 0; i < 12; i++)
	{
		average =  average + arr[i];
	}
	
	return (average / 12);
}

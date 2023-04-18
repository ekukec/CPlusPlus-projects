#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;


void std_dev(int arr[], int num);


int main()
{
	int numbers[100], num;
	
	cout << "Enter how many numbers u wish to generate: ";
	cin >> num;
	
	for(int i = 0; i < num; i++)
	{
		numbers[i] = rand() % 201;
		cout << "Number " << i + 1 << ": " << numbers[i] << endl;
	}
	
	std_dev(numbers, num);
	
	return 0;
}


void std_dev(int arr[], int num)
{
	int avg = 0, sum = 0, sum_dev = 0, standard;
	double deviation;
	
	for(int i = 0; i < num; i++)
	{
		sum = sum + arr[i];
	}
	cout << "Sum of all numbers: " << sum << endl;
	
	avg = sum / num;
	cout << "Average of all numbers: " << avg << endl;
	
	for(int i = 0; i < num; i++)
	{
		standard = pow((arr[i] - avg), 2);
		sum_dev = sum_dev + standard;
	}
	sum_dev = sum_dev / num;
	deviation = sqrt(sum_dev);
	cout << "Standard deviation is: " << deviation << endl;
}

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;





int main()
{
	int num, results[10] = {0};
	
	cout << "How many numbers to enter:";
	cin >> num;
	cin.ignore();
	
	char numbers[10];
	
	bool pass;
	for(int i = 0; i < num; i++)
	{
		pass = false;
		while(pass == false)
		{
			try
			{
				cout << "Enter number " << i + 1 << ": ";
				cin.getline(numbers, 10);
				//cout << endl;
				//cout << numbers << endl;
				
				if(atoi(numbers) > 10 || atoi(numbers) < 1)
				{
					pass = false;
					throw atoi(numbers);
				}
				pass = true;
				results[atoi(numbers) - 1]++;
			}
			catch(int e)
			{
				if(e == 0)
				{
					cout << "Please enter your number using digits only. Try again." << endl;
				}
				else
				{
					cout << "The number must be between 1-10. Try again." << endl;
				}
			}
			//cout << "i: " << i << endl;
		}
	}
	
	for(int i = 0; i < 10; i++)
	{
		if(i == 9)
			cout << i + 1 << ": ";
		else
			cout << i + 1 << " : ";
			
		for(int j = 0; j < results[i]; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	
	
	return 0;
}

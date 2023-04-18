#include <iostream>
#include <vector>

using namespace std;

void swap(vector<int> numbers);


int main()
{
	vector<int> numbers;
	int next, how_many;
	char again;
	
	
	do
	{
		cout << "How many numbers do u wish to enter?: ";
		cin >> how_many;
		
		for(int i = 0; i < how_many; i++)
		{
			cin >> next;
			numbers.push_back(next);
		}

		
		cout << "Do u wish to enter more numbers or procced onto the next part?(Y/N): ";
		cin >> again;	
		
	}while(again == 'Y' || again == 'y');

	
	swap(numbers);
	
	
	return 0;
}

void swap(vector<int> numbers)
{
	if(numbers.size() == 0)
	{
		cout << "Vector is empty" << endl;
	}
	else
	{
		int temp;
		temp = numbers[0];
		numbers[0] = numbers[numbers.size() - 1];
		numbers[numbers.size() - 1] = temp;
		
		cout << "New first number: " << numbers[0] << endl;
		cout << "New last number: " << numbers[numbers.size() - 1] << endl;
	}
}

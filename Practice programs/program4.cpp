#include <iostream>
#include <vector>

using namespace std;


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

	
	if(numbers[0] == 2 || numbers[numbers.size() - 1] == 2)
	{
		cout << "True" << endl;
	}
	else
	{
		cout << "False" << endl;
	}
	
	
	return 0;
}

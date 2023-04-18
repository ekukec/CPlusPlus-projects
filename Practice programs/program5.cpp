#include <iostream>
using namespace std;

int main()
{
	int number, start, stop;
	
	do
	{
		cout << "Enter the interval in which u want to find the prime numbers in\nStart: ";
		cin >> start;
		cout << "Stop: ";
		cin >> stop;
		
	}while(start > stop);
	
	
	for(; start <= stop; start++)
	{
		for (int i = 2; i <= start / 2; ++i) 
		{
            if (start % i == 0) 
			{
                break;
            }
            else
            {
            	cout << start << endl;
			}
        }
	}
	
	return 0;
}

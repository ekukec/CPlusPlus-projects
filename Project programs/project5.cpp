#include <iostream>
using namespace std;

int main()
{
	const int MAX_CAPACITY = 150;
	int num_of_attendants;
	char again;
	
	
	do
	{
		
		cout << "Enter the number of attendees planned for the meeting: ";
		cin >> num_of_attendants;
	
		if(num_of_attendants <= MAX_CAPACITY)
		{
			cout << "The meeting can take place\nThe number of people that can be added to the meeting is: " << MAX_CAPACITY - num_of_attendants << endl;
		}
		else
		{
			cout << "The meeting cannot take place as there are too much people present in the room\nThe minimum number of people that need to be excluded is: " 
			<< num_of_attendants - MAX_CAPACITY << endl;
		}
		
		cout << "Do you wish to try again? Y/N: ";
		cin >> again;
		cout << endl;
		
	}while(again == 'Y' || again == 'y');
	
	
	return 0;
}

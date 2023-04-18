#include <iostream>
using namespace std;

int main()
{
	int hours, minutes, day, length;
	char first_l, second_l, again;
	double rate, cost;
	
	do
	{
		cout << "Enter the day of the call(Mo Tu We Th Fr Sa Su): ";
		cin >> first_l >> second_l;
		
		do
		{
			cout << "Enter the time when the call started\nHours: ";
			cin >> hours;
			
		}while(hours < 0 || hours > 23);
		
		
		do
		{
			cout << "Minutes: ";
			cin >> minutes;
			
		}while(minutes < 0 || minutes > 59);
		
		
		cout << "Enter the duration of the call in minutes: ";
		cin >> length;
		
		
		if((first_l == 'M' || first_l == 'm')  && (second_l == 'O' || second_l == 'o'))
		{
			day = 1;
		}
		else if((first_l == 'T' || first_l == 't')  && (second_l == 'U' || second_l == 'u'))
		{
			day = 2;
		}
		else if((first_l == 'W' || first_l == 'w')  && (second_l == 'E' || second_l == 'e'))
		{
			day = 3;
		}
		else if((first_l == 'T' || first_l == 't')  && (second_l == 'H' || second_l == 'h'))
		{
			day = 4;
		}
		else if((first_l == 'F' || first_l == 'f')  && (second_l == 'R' || second_l == 'r'))
		{
			day = 5;
		}
		else if((first_l == 'S' || first_l == 's')  && (second_l == 'A' || second_l == 'a'))
		{
			day = 6;
		}
		else if((first_l == 'S' || first_l == 's')  && (second_l == 'U' || second_l == 'u'))
		{
			day = 7;
		}
		else
		{
			cout << "Incorrect input, please try again!" << endl;
		}
		
		
		
		if(day > 0 && day < 6)
		{
			if(hours < 8 || (hours >= 18 && minutes > 0))
			{
				rate = 0.25;
				cost =  rate * length;
			}
			else
			{
				rate = 0.40;
				cost = rate * length;
			}
		}
		else
		{
			rate = 0.15;
			cost = rate * length;
		}
		
		cout << "The cost of the call is: " << cost << " dollars!" << endl;
		cout << "Do you wish to calculate again? (Y/N): ";
		cin >> again;
		
	}while(again == 'Y' || again == 'y');
	
	
	return 0;
}

#include <iostream>
using namespace std;

int main()
{
	int month, day;
	char again;
	

	
	do
	{
		
		do
		{
			cout << "Enter the month in which you were born(number): ";
			cin >> month;
			
		}while(month < 1 || month > 12);
	
	
		do
		{
			cout << "Enter the date of the day on which you were born: ";
			cin >> day;
			
		}while(day < 1 || day > 31);
		
		
		switch(month)
		{
			case 1:
			
				if(day < 20)
				{
					cout << "Capricorn, Earth element" << endl;
				}
				else
				{
					cout << "Aquarius, Air element" << endl;
				}
			
			break;
		
			case 2:
			
				if(day < 19)
				{
					cout << "Aquarius, Air element" << endl;
				}
				else
				{
					cout << "Pisces, Water element" << endl;
				}
			
			break;
			
			case 3:
			
				if(day < 21)
				{
					cout << "Pisces, Water element" << endl;
				}
				else
				{
					cout << "Aries, Fire element" << endl;
				}
			
			break;
			
			case 4:
			
				if(day < 20)
				{
					cout << "Aries, Fire element" << endl;
				}
				else
				{
					cout << "Taurus, Earth element" << endl;
				}
			
			break;
			
			case 5:
			
				if(day < 21)
				{
					cout << "Taurus, Earth element" << endl;
				}
				else
				{
					cout << "Gemini, Air element" << endl;
				}
			
			break;
		
			case 6:
			
				if(day < 22)
				{
					cout << "Gemini, Air element" << endl;
				}
				else
				{
					cout << "Cancer, Water element" << endl;
				}
			
			break;
			
			case 7:
			
				if(day < 23)
				{
					cout << "Cancer, Water element" << endl;
				}
				else
				{
					cout << "Leo, Fire element" << endl;
				}
			
			break;
			
			case 8:
			
				if(day < 23)
				{
					cout << "Leo, Fire element" << endl;
				}
				else
				{
					cout << "Virgo, Earth element" << endl;
				}
			
			break;
			
			case 9:
			
				if(day < 23)
				{
					cout << "Virgo, Earth element" << endl;
				}
				else
				{
					cout << "Libra, Air element" << endl;
				}
			
			break;
		
			case 10:
			
				if(day < 23)
				{
					cout << "Libra, Air element" << endl;
				}
				else
				{
					cout << "Scorpio, Water element" << endl;
				}
			
			break;
			
			case 11:
			
				if(day < 22)
				{
					cout << "Scorpio, Water element" << endl;
				}
				else
				{
					cout << "Sagittarius, Fire element" << endl;
				}
			
			break;
			
			case 12:
			
				if(day < 22)
				{
					cout << "Sagittarius, Fire element" << endl;
				}
				else
				{
					cout << "Capricorn, Earth element" << endl;
				}
				
			break;
			
			default:
			
			break;
		}
		
		cout << "Do you wish to use this program again? (Y/N): ";
		cin >> again;
		
	}while(again == 'Y' || again == 'y');
	
	
	
	return 0;
}

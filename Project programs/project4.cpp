#include <iostream>
using namespace std;


void bottles(int start, int end);


int main()
{
	int start, end;
	
	do
	{
		cout << "Enter the number from which the song will start(0-99): ";
		cin >> start;
		cout << "Enter the number last to be sung(bigger than start): ";
		cin >> end;
	}while((((start || end) > 99) || ((start || end) < 0)) || (end > start));
	
	
	for(; start >= end; start--)
	{
		bottles(start, end);
		cout << " of beer on the wall," << endl;
		bottles(start, end);
		cout << " of beer," << endl;
		cout << "Take one down, pass it around," << endl;	
	}
	
	
	return 0;
}


void bottles(int start, int end)
{
	int ten = start / 10;
	int one = start % 10;
	


	if((start > 9) && (start < 20))
	{
		int teen = start;
		
		switch(teen)
		{
			case 10:
				cout << "ten bottles";
				break;
				
			case 11:
				cout << "eleven bottles";
				break;
				
			case 12:
				cout << "twelve bottles";
				break;
				
			case 13:
				cout << "thirteen bottles";
				break;
				
			case 14:
				cout << "fourteen bottles";
				break;
				
			case 15:
				cout << "fifteen bottles";
				break;
				
			case 16:
				cout << "sixteen bottles";
				break;
				
			case 17:
				cout << "seventeen bottles";
				break;
				
			case 18:
				cout << "eighteen bottles";
				break;
				
			case 19:
				cout << "nineteen bottles";
				break;
		}
	}
	else
	{
		switch(ten)
		{
			case 2:
			cout << "twenty"; 
			break;
			
			case 3:
				cout << "thirty"; 
				break;
				
			case 4:
				cout << "fourty"; 
				break;
				
			case 5:
				cout << "fifty"; 
				break;
				
			case 6:
				cout << "sixty"; 
				break;
				
			case 7:
				cout << "seventy"; 
				break;
				
			case 8:
				cout << "eighty"; 
				break;
				
			case 9:
				cout << "ninety"; 
				break;	
		}
	
		switch(one)
		{
			case 0:
				if(ten > 1)
					cout << " bottles";
				else
					cout << " zero bottles";
				break;
			
			case 1:
				if(ten > 1)
					cout << "-one bottles";
				else
					cout << " one bottle";
				break;
			
			case 2:
				if(ten > 1)
					cout << "-two bottles";
				else
					 cout << " two bottles";
				break;
			
			case 3:
				if(ten > 1)
					cout << "-three bottles"; 
				else
					cout << " three bottles"; 
				break;
				
			case 4:
				if(ten > 1)
					cout << "-four bottles"; 
				else
					cout << " four bottles"; 
				break;
				
			case 5:
				if(ten > 1)
					cout << "-five bottles"; 
				else
					cout << " five bottles"; 
				break;
				
			case 6:
				if(ten > 1)
					cout << "-six bottles"; 
				else
					cout << " six bottles"; 
				break;
				
			case 7:
				if(ten > 1)
					cout << "-seven bottles";
				else
				 	cout << " seven bottles";
				break;
				
			case 8:
				if(ten > 1)
					cout << "-eight bottles"; 
				else
					cout << " eight bottles";
				break;
				
			case 9:
				if(ten > 1)
					cout << "-nine bottles"; 
				else
					cout << " nine bottles";
				break;	
		}
	}		
}

#include <iostream>
using namespace std;

int main()
{
	int num_cards, score = 0, value;
	char card;
	
	do
	{
		cout << "Enter the number of cards you have been dealt: ";
		cin >> num_cards;
		
	}while(num_cards < 2 || num_cards > 5);
	
	cout << "The inputs for the cards are:\n2 - 9 : integer\n10 : 't'\nJack : 'j'\nQueen : 'q'\nKing : 'k'\nAce : 'a'\n";
	
	for(int i = 1; i <= num_cards; i++)
	{
		cout << "Enter the value of card " << i << " : ";
		cin >> card;
		
		switch(card)
		{
			case '2':
				
				value = 2;
				break;
				
			case '3':
				
				value = 3;
				break;
				
			case '4':
				
				value = 4;
				break;
				
			case '5':
				
				value = 5;
				break;
				
			case '6':
				
				value = 6;
				break;
				
			case '7':
				
				value = 7;
				break;
				
			case '8':
				
				value = 8;
				break;
				
			case '9':
				
				value = 9;
				break;
				
			case 't':
				
				value = 10;
				break;
				
			case 'T':
				
				value = 10;
				break;
				
			case 'j':
				
				value = 10;
				break;
				
			case 'J':
				
				value = 10;
				break;
				
			case 'q':
				
				value = 10;
				break;
				
			case 'Q':
				
				value = 10;
				break;
				
			case 'k':
				
				value = 10;
				break;
				
			case 'K':
				
				value = 10;
				break;
				
			case 'a':
				
				if((score + 11) > 21)
				{
					value = 1;
				}
				else
				{
					value = 11;
				}
				break;
				
			case 'A':
				
				if((score + 11) > 21)
				{
					value = 1;
				}
				else
				{
					value = 11;
				}
				break;
				
			default:
				
				break;
		}
		
		score = score + value;
		cout << endl;
	}
	
	if(score > 21)
	{
		cout << "Busted" << endl;
	}
	else
	{
		cout << "Score: " << score << endl;
	}
	
	
	return 0;
}

#include <iostream>
using namespace std;

int main()
{
	char again;
	
	
	do
	{
		char player1, player2;
		int rounds1 = 0, rounds2 = 0;
		
		cout << "Each player shall enter either P for paper, R for rock or S scissors, the best of 3 wins" << endl;
		
		while(rounds1 < 2 && rounds2 < 2)
		{
			cout << "Player 1 enter your pick: ";
			cin >> player1;
			cout << "Player 2 enter your pick: ";
			cin >> player2;
			
			if((player1 == 'P' || player1 == 'p') && (player2 == 'R' || player2 == 'r'))
			{
				cout << "Paper beats rock, player 1 won!" << endl;
				rounds1++;
				cout << "Score:\nPlayer 1: " << rounds1 << endl << "Player 2: " << rounds2 << endl;
				
			}
			else if((player1 == 'R' || player1 == 'r') && (player2 == 'P' || player2 == 'p'))
			{
				cout << "Paper beats rock, player 2 won!" << endl;
				rounds2++;
				cout << "Score:\nPlayer 1: " << rounds1 << endl << "Player 2: " << rounds2 << endl;
				
			}
			else if((player1 == 'P' || player1 == 'p') && (player2 == 'S' || player2 == 's'))
			{
				cout << "Scissors beat paper, player 2 won!" << endl;
				rounds2++;
				cout << "Score:\nPlayer 1: " << rounds1 << endl << "Player 2: " << rounds2 << endl;
				
			}
			else if((player1 == 'S' || player1 == 's') && (player2 == 'P' || player2 == 'p'))
			{
				cout << "Scissors beat paper, player 1 won!" << endl;
				rounds1++;
				cout << "Score:\nPlayer 1: " << rounds1 << endl << "Player 2: " << rounds2 << endl;
				
			}
			else if((player1 == 'R' || player1 == 'r') && (player2 == 'S' || player2 == 's'))
			{
				cout << "Rock beats scissors, player 1 won!" << endl;
				rounds1++;
				cout << "Score:\nPlayer 1: " << rounds1 << endl << "Player 2: " << rounds2 << endl;
				
			}
			else if((player1 == 'S' || player1 == 's') && (player2 == 'R' || player2 == 'r'))
			{
				cout << "Rock beats scissors, player 2 won!" << endl;
				rounds2++;
				cout << "Score:\nPlayer 1: " << rounds1 << endl << "Player 2: " << rounds2 << endl;
				
			}
			else if((player1 == 'R' || player1 == 'r') && (player2 == 'R' || player2 == 'r'))
			{
				cout << "Both players played rock, its a tie!" << endl;
				cout << "Score:\nPlayer 1: " << rounds1 << endl << "Player 2: " << rounds2 << endl;
			}
			else if((player1 == 'P' || player1 == 'p') && (player2 == 'P' || player2 == 'p'))
			{
				cout << "Both players played paper, its a tie!" << endl;
				cout << "Score:\nPlayer 1: " << rounds1 << endl << "Player 2: " << rounds2 << endl;
			}
			else if((player1 == 'S' || player1 == 's') && (player2 == 'S' || player2 == 's'))
			{
				cout << "Both players played scissors, its a tie!" << endl;
				cout << "Score:\nPlayer 1: " << rounds1 << endl << "Player 2: " << rounds2 << endl;
			}
			else
			{
				cout << "There has been an error, try again!" << endl;
			}
		}
		
		if(rounds1 > 1)
		{
			cout << "===============" << endl;
			cout << "Player 1 won!" << endl;
			cout << "===============" << endl;
		}
		else
		{
			cout << "===============" << endl;
			cout << "Player 2 won!" << endl;
			cout << "===============" << endl;
		}
		
		cout << "Do you wish to play again? (Y/N): ";
		cin >> again;
		cout << endl;
		
	}while(again == 'Y' || again == 'y');
	
	return 0;
}

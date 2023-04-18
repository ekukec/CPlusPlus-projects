#include <iostream>
#include <cstdlib>

using namespace std;

int counter = 0;

bool first_init = false;


void initialize_b(char board [][4]);

void initialize_v(int values [][4]);

void flip(char board [][4], int values [][4]);

void space();

void found(int &counter, int flip, char board [][4], int x1, int y1, int x2, int y2);

int main()
{
	char board [4][4];
	int values [4][4];
	
	initialize_v(values);
	
	while(counter < 8)
	{	
		initialize_b(board);

		flip(board, values);
	}
	
	return 0;
}

void initialize_b(char board [][4])
{
	bool column = false;
	
	cout << "========================" << endl;
	
	cout << "  ";
	
	for(int i = 0; i < 4; i++)
	{	
		if(column == false)
		{
			for(int k = 0; k < 4; k++)
			{
				cout << k + 1 << " ";
			}
			column = true;
			cout << endl;
		}
		
		cout << i + 1 << " ";
		
		for(int j = 0; j < 4; j++)
		{
			if(first_init == false)
			{
				board [i][j] = '*';	
			}
			cout << board [i][j] << " ";
		}
		
		cout << endl;
	}
	
	first_init = true;
}

void initialize_v(int values [][4])
{
	int pairs[16], numbers[8], i, j;
	
	for(int i = 0; i < 4; i++)
	{
		for(int j = 0; j < 4; j++)
		{
			values [i][j] = -1;
		}
	}
	
	for(int i = 0; i < 8; i++)
	{
		numbers[i] = i + 1;
		//cout << "Number " << i + 1 << " = " << numbers[i] << endl;
	}
	
	int x = 0;
	for(int i = 0; i < 16; i = i + 2)
	{
		pairs[i] = numbers[x];
		pairs[i + 1] = numbers[x];
		//cout << "pair " << i << " = " << numbers[x] << endl;
		//cout << "pair " << i + 1 << " = " << numbers[x] << endl;
		
		x++;
	}
	
	/*
	x = 0;
	for(int i = 0; i < 4; i++)
	{
		for(int j = 0; j < 4; j++)
		{
			values [i][j] = pairs[x];
			//cout << "Value " << x << " = " << pairs[x] << endl;
			x++;
		}
	}
	*/
	
	x = 0;
	while(x < 16)
	{
		i = rand() % 4;
		j = rand() % 4;
		
		//cout << "i = " << i << endl;
		//cout << "j = " << j << endl; 
		
		if(values [i][j] == -1)
		{
			values [i][j] = pairs[x];
			//cout << "Value " << x << " = " << pairs[x] << endl;
			x++;
		}
	}
	
	cout << "Values initialized" << endl;
}

void flip(char board [][4], int values [][4])
{
	int x1, y1, x2, y2, flip1, flip2;
	bool column = false;
	
	cout << "Enter line number 1: ";
	cin >> x1;
	x1--;
	cout << "Enter row number 1: ";
	cin >> y1;
	y1--;
	cout << "Enter line number 2: ";
	cin >> x2;
	x2--;
	cout << "Enter row number 2: ";
	cin >> y2;
	y2--;
	
	space();
	
	cout << "  ";
	
	for(int i = 0; i < 4; i++)
	{
		
		if(column == false)
		{
			for(int k = 0; k < 4; k++)
			{
				cout << k + 1 << " ";
			}
			column = true;
			cout << endl;
		}
		
		cout << i + 1 << " ";
		
		for(int j = 0; j < 4; j++)
		{
			if(i == x1 && j == y1)
			{
				cout << values [x1][y1] << " ";
				flip1 = values [x1][y1];
			}
			else if(i == x2 && j == y2)
			{
				cout << values [x2][y2] << " ";
				flip2 = values [x2][y2];
			}
			else
			{
				cout << board [i][j] << " ";
			}
		}
		
		cout << endl;
	}
	
	if(flip1 == flip2)
	{
		found(counter, flip1, board, x1, y1, x2, y2);
	}
}

void space()
{
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl
		<< endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
}

void found(int &counter, int flip, char board [][4], int x1, int y1, int x2, int y2)
{
	cout << "Pair found!" << endl;
	
	counter++;
	
	switch(flip)
	{
		case 1:
			board [x1][y1] = '1';
			board [x2][y2] = '1';
			break;
			
		case 2:
			board [x1][y1] = '2';
			board [x2][y2] = '2';
			break;
			
		case 3:
			board [x1][y1] = '3';
			board [x2][y2] = '3';
			break;
			
		case 4:
			board [x1][y1] = '4';
			board [x2][y2] = '4';
			break;
			
		case 5:
			board [x1][y1] = '5';
			board [x2][y2] = '5';
			break;
			
		case 6:
			board [x1][y1] = '6';
			board [x2][y2] = '6';
			break;
			
		case 7:
			board [x1][y1] = '7';
			board [x2][y2] = '7';
			break;
			
		case 8:
			board [x1][y1] = '8';
			board [x2][y2] = '8';
			break;
	}
}

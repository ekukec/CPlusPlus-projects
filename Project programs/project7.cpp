#include <iostream>

using namespace std;

int* create2DArray(int rows, int columns);

void set(int *arr, int rows, int columns, int desired_row, int desired_column, int val);

int get(int *arr, int rows, int columns, int desired_row, int desired_column);

void display(int *arr, int rows, int columns);


int main()
{
	int rows, columns, *array, choice, des_row, des_col, value;
	
	cout << "Enter how the dimensions of the 2d array" << endl;
	cout << "Rows: ";
	cin >> rows;
	cout << "Columns: ";
	cin >> columns;
	
	array = create2DArray(rows, columns);
	
	for(int i = 0; i < (rows * columns); i++)
	{
		array[i] = i + 1;
	}
	
	do
	{
		cout << "===================================" << endl;
		cout << "1. Set" << endl;
		cout << "2. Get" << endl;
		cout << "3. Display" << endl;
		cout << "9. Exit" << endl;
		cout << "===================================" << endl;
		
		cout << "Enter choice: ";
		cin >> choice;
		
		switch(choice)
		{
			case 1:
				cout << "Enter the row in which to set the value: ";
				do
				{
					cin >> des_row;
					
				}while(des_row < 0 || des_row > rows);
				//des_row--;
				
				cout << "Enter the column in which to set the value: ";
				do
				{
					cin >> des_col;
					
				}while(des_col < 0 || des_col > columns);
				//des_col--;
				
				cout << "Enter the value: ";
				cin >> value;
				
				set(array, rows, columns, des_row, des_col, value);
				break;
			
			case 2:
				cout << "Enter the row from which to get the value: ";
				do
				{
					cin >> des_row;
					
				}while(des_row < 0 || des_row > rows);
				//des_row--;
				
				cout << "Enter the column from which to get the value: ";
				do
				{
					cin >> des_col;
					
				}while(des_col < 0 || des_col > columns);
				//des_col--;
				
				value = get(array, rows, columns, des_row, des_col);
				cout << "Value in row " << des_row + 1 << ", column " << des_col + 1 << " is " << value << endl;
				break;
				
			case 3:
				display(array, rows, columns);
				break;
		}
	}while(choice != 9);
	
	
	return 0;
}

int* create2DArray(int rows, int columns)
{
	int *array;
	
	array = new int[rows * columns];
	
	return array;
}

void set(int *arr, int rows, int columns, int desired_row, int desired_column, int val)
{
	int pos;
	
	pos = ((desired_row - 1) * columns) + desired_column - 1;

	cout << "Pos " << pos << endl;
	arr[pos] = val;
	
	cout << "Value to row " << desired_row + 1 << ", column " << desired_column + 1 << " set to " << val << endl;
}

int get(int *arr, int rows, int columns, int desired_row, int desired_column)
{
	int pos;
	
	pos = ((desired_row - 1) * columns) + desired_column - 1;
	
	return arr[pos];
}

void display(int *arr, int rows, int columns)
{
	int x = columns;
	
	for(int i = 0; i < (rows * columns); i++)
	{
		cout << arr[i] << " | ";
		x--;
		if(x == 0)
		{
			x = columns;
			cout << endl;
		}
	}
}

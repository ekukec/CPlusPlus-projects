#include <iostream>
#include <iomanip>

using namespace std;

void fill(char arr[]);

int main()
{
	char line[100], letter[100], search, changeChar;
	int occurrence[100] = {0}, count = 0, copy = 0, changeNum;
	bool exists = false;
	bool space = false;
	
	fill(line);
	fill(letter);
	
	cout << "Enter a line of text which has a max of 100 characters: ";
	cin.getline(line,100);
	
	cout << "The line u entered: ";
	for(int i = 0; i < 100; i++)
	{
		cout << line[i];
	}
	
	for(int i = 0; i < 100; i++)
	{		
		if(line[i] != ' ')
		{
			for(int j = 0; j < 100; j++)
			{
				if(line[i] == line[j])
				{
					//cout << "Copy of " << line[i] << " found" << endl;
				}
				if(line[i] == letter[j])
				{
					//cout << "Letter exists" << endl;
					exists = true;
				}
			}
			
			if(exists == false)
			{
				//cout << "letter " << line[i] << " entered" << endl;
				letter[count] = line[i];
				count++;
			}
		}	
		exists = false;	
	}
	
	for(int i = 0; i < count; i++)
	{
		copy = 0;
		for(int j = 0; j < 100; j++)
		{
			if(letter[i] == line[j])
			{
				copy++;
			}
		}
		occurrence[i] = copy;
	}
	
	for(int i = 0; i < count - 1; i++)
	{
		if(i > 0)
		{
			for(int j = i; j >= 0; j--)
			{
				if(occurrence[j] < occurrence[j - 1])
				{
					changeNum = occurrence[j];
					occurrence[j] = occurrence[j - 1];
					occurrence[j - 1] = changeNum;
					
					changeChar = letter[j];
					letter[j] = letter[j - 1];
					letter[j - 1] = changeChar;
				}
			}
		}
	}
	
	cout << "Letter" << setw(15) << "Occurrence" << endl;
	
	for(int i = count - 2; i >= 0; i--)
	{
		cout << letter[i] << setw(10) << occurrence[i] << endl;
	}
	
	return 0;
}

void fill(char arr[])
{
	for(int i = 0; i < 100; i++)
	{
		arr[i] = ' ';
	}
}

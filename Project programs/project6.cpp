#include <iostream>
#include <string>

using namespace std;


int main()
{
	string sentence, numbers("1234567890");
	bool is_num = false, first_blank = false, last_blank = false, write_num = false, was_letter = false;
	int first, last, z = 0;
	
	cout << "Enter a sentence: ";
	getline(cin, sentence);
	
	
	for(int i = 0; i < sentence.length(); i++)
	{
		if(sentence[i] == ' ' && first_blank == true)
		{
			last_blank = true;
			last = i;
			cout << "last blank" << i << endl;
		}
		if(sentence[i] == ' ')
		{
			first_blank = true;
			if(z == 0)
			{
				first = i;
				z++;
				cout << "First blank" << i << endl;
			}
			else
			{
				first = last;
				cout << "First blank" << i << endl;
			}
		}
		
		if(last_blank == false)
		{
			for(int j = 0; j < numbers.length(); j++)
			{
				if(sentence[i] == numbers[j])
				{
					is_num = true;
				}
			}
		}
		
		if(first_blank == true && last_blank == false)
		{
			if(is_num == false)
			{
				write_num = false;
			}
		}
		
		if(first_blank == true && last_blank == true)
		{
			if(is_num == true)
			{
				write_num = true;
			}
			last_blank = false;
		}
		
		if(write_num == true)
		{
			for(int x = first + 1; x < last; x++)
			{
				cout << sentence[x];
				sentence[x] = 'x';
			}			
			write_num = false;
			cout << "wrote x" << endl;
		}
		
		if(sentence[i + 1] != ' ')
		{
			is_num = false;
		}
		
	}
	
	for(int i = 0; i < sentence.length(); i++)
	{
		cout << sentence[i];
	}
	
	
	return 0;
}

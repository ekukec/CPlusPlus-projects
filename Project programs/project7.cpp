#include <iostream>
#include <string>

using namespace std;


int main()
{
	string sentence, delims(" ,."), orher(" or her"), orhers(" or hers"), orshe(" or she");
	bool is_del = false, is_del2 = false;
	int counter = 0;
	char next;
		
	do
	{
		cin.get(next);
		sentence = sentence + next;
		counter++;
	}while(counter < 100 && next != '\n');
	
	cout << sentence << endl;
	
	for(int i = 0; i < sentence.length(); i++)
	{
		if(sentence[i] == 'h' || sentence[i] == 'H')
		{
			for(int j = 0; j < 3; j++)
			{
				if(sentence[i - 1] == delims[j])
				{
					is_del = true;
				}
			}
			
			if(sentence[i + 1] == 'e' && is_del == true)
			{
				for(int j = 0; j < 3; j++)
				{
					if(sentence[i + 2] == delims[j])
					{
						is_del2 = true;
					}
				}
				
				if(is_del2 == true)
				{
					sentence.insert(i + 2, orshe);
					is_del = false;
					is_del2 = false;
				}
			}
			
			if(sentence[i + 1] == 'i' && is_del == true)
			{
				if(sentence[i + 2] == 'm' || sentence[i + 2] == 's')
				{
					for(int j = 0; j < 3; j++)
					{
						if(sentence[i + 3] == delims[j])
						{
							is_del2 = true;
						}
					}
					
					if(is_del == true && sentence[i + 2] == 'm')
					{
						sentence.insert(i + 3, orher);
						is_del = false;
						is_del2 = false;
					}
					else if(is_del == true && sentence[i + 2] == 's')
					{
						sentence.insert(i + 3, orhers);
						is_del = false;
						is_del2 = false;
					}
				}
			}
			
		}
	}
	
	cout << sentence << endl;
	
	return 0;
}

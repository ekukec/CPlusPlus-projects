#include <iostream>
#include <string>

using namespace std;


int main()
{
	string sentence, delims("\n! ,."), lov("love"), line("\n");
	int word = 0, sent, dels;
	bool delm = false, love = false;
	
	cout << "Enter sentence :";
	getline(cin, sentence);
	
	sentence = sentence + line;
	//cout << sentence.length() << endl;
	sent = sentence.length();
	dels =  delims.length();
	
	for(int i = 0; i < sent; i++)
	{
		//cout << "check" << endl;
		for(int j = 0; j < dels; j++)
		{
			if(sentence[i] == delims[j])
			{
				word = 0;
				delm = true;
			}
		}
		
		if(delm == false)
		{
			word++;
		}
		
		if(word == 4)
		{
			for(int j = 0; j < delims.length(); j++)
			{
				if(sentence[i + 1] == delims[j])
				{
					word = 0;
					love = true;
				}
			}
		}
		
		if(love == true)
		{
			if(isupper(sentence[i - 3]))
			{
				sentence[i - 3] = 'L';
				sentence[i - 2] = 'o';
				sentence[i - 1] = 'v';
				sentence[i ] = 'e';
			}
			else
			{
				sentence[i - 3] = 'l';
				sentence[i - 2] = 'o';
				sentence[i - 1] = 'v';
				sentence[i ] = 'e';
			}
		}
		
		delm = false;
		love = false;
	}
	
	
	for(int i = 0; i < sent; i++)
	{
		cout << sentence[i];
	}
	
	cout << endl;
	
	
	return 0;
}

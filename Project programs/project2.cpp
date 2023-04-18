#include <iostream>
#include <string>

using namespace std;

void count_words(string& sent, int& how_many);

void letters(string& sent);


int main()
{
	string sentence;
	int words = 0;
	
	cout << "Enter a sentence: " << endl;
	getline(cin, sentence);
	
	count_words(sentence, words);
	
	cout << "There are " << words << " words in the sentence" << endl;
	
	cout << "Letters and their occurrencecs: " << endl;
	
	letters(sentence);
	
	return 0;
}

void count_words(string& sent, int& how_many)
{
	string search, limits(" ,.");
	bool last = false;
	
	for(int i = 0; i < sent.length(); i++)
	{
		for(int j = 0; j < limits.length(); j++)
		{
			if(sent[i] == limits[j])
			{
				how_many++;
			}
		}
		
		sent[i] = tolower(sent[i]);
	}
	
	for(int i = 0; i < limits.length(); i++)
	{
		if(sent[sent.length() - 1] == limits[i])
		{
			last = true;	
		}	
	}
	
	if(last == false)
	{
		how_many++;
	}
	
}

void letters(string& sent)
{
	string limits(" ,.");
	char temp, search;
	int copy = 1;
	
	for(int i = 0; i < sent.length(); i++)
	{
		for(int j = i; j < sent.length(); j++)
		{
			if(sent[i] > sent[j])
			{
				temp = sent[i];
				sent[i] = sent[j];
				sent[j] = temp;
			}
		}
	}
	
	for(int i = 0; i < sent.length(); i++)
	{
		search = sent[i];
		
		for(int j = i; j < sent.length() - 1; j++)
		{
			if(sent[i] == sent[j + 1])
			{
				copy++;
			}
		}
		if(sent[i] == ' ')
		{
		}
		else if(sent[i] == '.')
		{
		}
		else if(sent[i] == ',')
		{
		}
		else
		{
			cout << sent[i] << copy << endl;	
		}
		i = i + copy - 1;
		copy = 1;
	}
	
}

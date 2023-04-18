#include <iostream>
#include <string>

using namespace std;

void del_spc(string& sent, int i);


int main()
{
	string sentence;
	int spc = 0;

	
	cout << "Enter a sentence up to 100 characters: " << endl;
	getline(cin, sentence, '.');
	
	sentence.insert(sentence.length(),".");
	
	//cout << sentence << endl;
	//cout << sentence.length() << endl;
	
	for(int j = 0; j < sentence.length(); j++)
	{
		if(sentence[j] == '\n')
		{
			sentence[j] = ' ';
		}
	}
	
	for(int i = 0; i < sentence.length(); i++)
	{
		while(sentence[i] == ' ' && sentence[i + 1] == ' ')
		{
			del_spc(sentence, i);
		}
		if(i == 0)
		{
			sentence[i] = toupper(sentence[i]);
		}
		else
		{
			sentence[i] = tolower(sentence[i]);
		}
	}
	
	cout << sentence << endl;
	
	return 0;
}

void del_spc(string& sent, int i)
{
	//cout << i << endl;
	//cout << sent.length() << endl;
	for(int x = i; x < sent.length(); x++)
	{
		sent[x] = sent[x + 1];
	}
}

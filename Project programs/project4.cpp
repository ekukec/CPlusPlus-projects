#include <iostream>
#include <cstring>

using namespace std;

void reverse(char arr[], int size);


int main()
{
	int how_many;
	
	cout << "How many words will the string contain: ";
	cin >> how_many;
	how_many++;
	
	char sentence[how_many];
	
	cin.ignore();
	cin.getline(sentence, how_many);
	
	cout << sentence << endl;
	
	reverse(sentence, how_many);
	
	return 0;
}

void reverse(char arr[], int size)
{
	char *first, *last, temp;
	
	first = &arr[0];
	last = &arr[size - 2];
	
	//cout << "First " << *first << endl;
	//cout << "Last " << *last << endl;
	
	size = size / 2;
	
	cout << size << endl;
	
	while(size > 0)
	{
		temp = *first;
		*first = *last;
		*last = temp; 
		
		first = first + 1;
		last = last - 1;
		
		size--;
	}
	
	cout << arr << endl;
}

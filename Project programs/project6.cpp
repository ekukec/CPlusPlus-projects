#include <iostream>
#include <string>

using namespace std;

string* addEntry(string *dynamicArray, int &size, string newEntry);

string* deleteEntry(string *dynamicArray, int &size, string entryToDelete);

void display(string *dynamicArray, int size);


int main()
{
	string *names, entry;
	int how_many, choice;
	
	cout << "How many names do u wish to enter: ";
	cin >> how_many;
	
	names = new string[how_many];
	
	for(int i = 0; i < how_many; i++)
	{
		cout << "Enter name " << i + 1 << ": ";
		cin >> names[i];
	}
	
	do
	{
		cout << "===================================" << endl;
		cout << "1. Add an entry" << endl;
		cout << "2. Delete an entry" << endl;
		cout << "3. Display" << endl;
		cout << "9. Exit" << endl;
		cout << "===================================" << endl;
		
		cout << "Enter choice: ";
		cin >> choice;
		
		switch(choice)
		{
			case 1:
				cout << "Enter the entry u wish to add: ";
				cin >> entry;
				names = addEntry(names, how_many, entry);
				break;
			
			case 2:
				cout << "Enter the entry u wish to delete: ";
				cin >> entry;
				names = deleteEntry(names, how_many, entry);
				break;
				
			case 3:
				display(names, how_many);
				break;
		}
	}while(choice != 9);
	
	return 0;
}

string* addEntry(string *dynamicArray, int &size, string newEntry)
{
	string *add;
	size++;
	
	add = new string[size];
	
	for(int i = 0; i < (size - 1); i++)
	{
		add[i] = dynamicArray[i];
	}
	
	add[size - 1] = newEntry;
	
	return add; 
}

string* deleteEntry(string *dynamicArray, int &size, string entryToDelete)
{
	string *del;
	int x = 0;
	size--;
	
	del = new string[size];
	
	for(int i = 0; i < (size + 1); i++)
	{
		if(dynamicArray[i] != entryToDelete)
		{
			del[x] = dynamicArray[i];
			x++;
		}
	}
	
	
	return del; 
}

void display(string *dynamicArray, int size)
{
	for(int i = 0; i < size; i++)
	{
		cout << dynamicArray[i] << endl;
	}
}

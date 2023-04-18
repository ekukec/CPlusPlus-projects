#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;


struct book
{
	string author;
	string title;
	string date;	
};

bool operator < (const book& entry1, const book& entry2)
{
	if(entry1.author < entry2.author)
	{
		return true;
	}
	else
	{
		return false;
	}
}


int main()
{
	int choice = 0;
	vector<book> database;
	book entry;
	
	while(choice != 3)
	{
		cout << "1. Add a book" << endl;
		cout << "2. Print listing sorted by author" << endl;
		cout << "3. Quit" << endl;
		cout << "Enter choice: ";
		cin >> choice;
		
		switch(choice)
		{
			case 1:
				cout << "Enter author: ";
				cin >> entry.author;
				cout << "Enter title: ";
				cin >> entry.title;
				cout << "Enter date: ";
				cin >> entry.date;
				
				database.push_back(entry);
				break;
			
			case 2:
				sort(database.begin(), database.end());
				
				vector<book> :: iterator p;
				for(p = database.begin(); p != database.end(); p++)
				{
					cout << p->author << " | " << p->title << " | " << p->date << endl;
				}
				break;
		}
	}
	
	
	
	return 0;
}

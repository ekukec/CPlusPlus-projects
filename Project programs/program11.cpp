#include <iostream>

using namespace std;


class Words
{
	public:
		Words(const Words& par1);
		
		Words();
		
		~Words();
		
		void addEntry(string newEntry);
		
		void deleteEntry(string entryToDelete);

		void display() const;
		
		void operator =(const Words& par1);
		
	private:
		string *array;
		int size;
};


int main()
{
	Words w1, w2;
	
	w1.addEntry("Test entry");
	
	w1.addEntry(" num 1");
	
	w1.display();
	
	w2 = w1;
	
	w2.deleteEntry(" num 1");
	w2.addEntry(" num 2");
	
	w2.display();
	
	Words w3(w1);
	
	w3.deleteEntry(" num 1");
	w3.addEntry(" num 3");
	
	w3.display();
	
	return 0;
}

Words::Words(const Words& par1)
{
	size = par1.size;
	array = new string[size];
	
	for(int i = 0; i < size; i++)
	{
		array[i] = par1.array[i];
	}
}

Words::Words() : size(0)
{
	array = new string[size];
}

Words::~Words()
{
	delete [] array;
}

void Words::addEntry(string newEntry)
{
	string *copy, *del;
	size++;
	
	copy = new string[size];
	
	for(int i = 0; i < (size-1); i++)
	{
		copy[i] = array[i];	
	} 
	
	copy[size - 1] = newEntry;
	
	del = array;
	array = copy;
	
	delete [] del;
}

void Words::deleteEntry(string entryToDelete)
{
	string *copy, *del;
	int x = 0;
	size--;
	
	copy = new string[size];
	
	for(int i = 0; i < (size + 1); i++)
	{
		if(array[i] != entryToDelete)
		{
			copy[x] = array[i];
			x++;
		}
	}
	
	del = array;
	array = copy;
	
	delete [] del;
}

void Words::display() const
{
	for(int i = 0; i < size; i++)
	{
		cout << array[i];
	}
	cout << endl;
}

void Words::operator =(const Words& par1)
{
	
	if(size == par1.size)
	{
		for(int i = 0; i < size; i++)
		{
			array[i] = par1.array[i];
		}
	}
	else
	{
		string *copy, *del;
		size = par1.size;
		
		copy = new string[size];
		
		for(int i = 0; i < size; i++)
		{
			copy[i] = par1.array[i];	
		}
		
		del = array;
		array = copy;
		
		delete [] del;	
	}	
}

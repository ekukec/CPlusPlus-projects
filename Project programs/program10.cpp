#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;


class StringSet
{
	public:
		StringSet(string arr[], int size);
		
		StringSet();
		
		void add(string value);
		
		void remove(string value);
		
		void remove();
		
		void clear_set();
		
		int size() const;
		
		void output() const;
		
		string get_value(int position) const;
		
		friend StringSet operator +(const StringSet& par1, const StringSet& par2);
		
		friend StringSet operator *(const StringSet& par1, const StringSet& par2);
		
		void operator =(const StringSet par1);
		
		double query(const StringSet par1);
	
	private:
		vector<string> array;	
};


string* separate(ifstream& in, int& size);


int main()
{
	ifstream in;
	ofstream out;
	int size1, size2;
	
	
	in.open("document1.dat");
	
	string *doc1 = separate(in, size1);
	StringSet s1(doc1, size1);
	in.close();
	
	StringSet search;
	
	search.add("chocolate");
	
	

	cout << s1.query(search);
	
	
	
	in.open("document2.dat");
	
	
	string *doc2 = separate(in, size2);
	StringSet s2(doc2, size2);
	in.close();
	
	StringSet search2;
	
	search2.add("cream");
	
	s2.output();
	
	cout << s2.query(search2);
	
	return 0;
}

StringSet::StringSet(string arr[], int size)
{
	int i = 0;
	while(i < size)
	{
		array.push_back(arr[i]);
		//cout << arr[i] << " = " << array[i] << endl;
		i++;
	}	
}

StringSet::StringSet()
{
	
}

void StringSet::add(string value)
{
	array.push_back(value);
}

void StringSet::remove(string value)
{
	for(int i = 0; i < array.size(); i++)
	{
		if(array[i] == value)
		{
			array.erase(array.begin()+i);
		}
	}
}

void StringSet::remove()
{
	array.pop_back();
}

void StringSet::clear_set()
{
	int i = 0;
	while(!array.empty())
	{
		array.pop_back();
		i++;
	}
}

int StringSet::size() const
{
	return array.size();
}

void StringSet::output() const
{
	for(int i = 0; i < array.size(); i++)
	{
		cout << array[i] << " ";
	}
}

string StringSet::get_value(int position) const
{
	return array[position];
}

StringSet operator +(const StringSet& par1, const StringSet& par2)
{
	//cout << "works" << endl;
	StringSet result;
	int x = 0;
	
	for(int i = 0; i < par1.size(); i++)
	{
		result.add(par1.get_value(i));
		//cout << result.get_value(x);
		//x++;	
	}
	for(int i = 0; i < par2.size(); i++)
	{
		result.add(par2.get_value(i));
		//cout << result.get_value(x);
		//x++;	
	}
	
	return result;
}

StringSet operator *(const StringSet& par1, const StringSet& par2)
{
	//cout << "works" << endl;
	StringSet result;
	bool write = true;
	
	for(int i = 0; i < par1.size(); i++)
	{
		//cout << par1.size() << endl;
		for(int j = 0; j < par2.size(); j++)
		{
			//cout << par2.size() << endl;
			if(par1.get_value(i) == par2.get_value(j))
			{
				//cout << par1.get_value(i) << " = " << par2.get_value(j) << endl;
				for(int k = 0; k < result.size(); k++)
				{
					if(result.get_value(k) == par1.get_value(i))
					{
						write = false;
					}
				}
				if(write)
				{
					result.add(par1.get_value(i));
				}
			}
		}
		write = true;
	}
	
	return result;
}

void StringSet::operator =(const StringSet par1)
{
	//cout << "works" << endl;
	//par1.output();
	//cout << par1.size();

	while(array.size() > 0)
	{
		array.pop_back();
	}
	
	for(int i = 0; i < par1.size(); i++)
	{
		array.push_back(par1.get_value(i));	
	}
}

double StringSet::query(const StringSet par1)
{
	StringSet document, search;
	bool write = true;
	double sim = 0, doc = 0, src = 0;
	int hit = 0;
	
	for(int i = 0; i < array.size(); i++)
	{
		for(int j = 0; j < document.size(); j++)
		{
			if(document.array[j] == array[i])
			{
				write = false;
			}
		}
		if(write)
		{
			document.add(array[i]);
			//cout << "Written " << array[i] << endl;
		}
		write = true;
	}
	
	for(int i = 0; i < par1.size(); i++)
	{
		for(int j = 0; j < search.size(); j++)
		{
			if(search.array[j] == par1.array[i])
			{
				write = false;
			}
		}
		if(write)
		{
			search.add(par1.array[i]);
		}
		write = true;
	}
	
	for(int i = 0; i < document.size(); i++)
	{
		for(int j = 0; j < search.size(); j++)
		{
			//cout << "Comparing " << document.array[i] << " with " << search.array[j] << endl;
			if(document.array[i] == search.array[j])
			{
				hit++;
				//cout << search.array[j];
			}
		}
		//cout << document.array[i] << " ";
	}
	
	
	
	doc = sqrt(document.size());
	
	src = sqrt(search.size());
	
	cout << hit << " / " << "(" << doc << " * " << src << ")" << endl;
		
	sim = hit / (doc * src);
	
	return sim;
}

string* separate(ifstream& in, int& size)
{
	char next;
	int word_counter = 0, x = 0;
	string search1 = " .?!", search2 = " .,?!", text;
	bool new_word = false;
	
	while(in.get(next))
	{
		for(int i = 0; i < search1.size(); i++)
		{
			if(next == search1[i])
			{
				word_counter++;
			}
		}
		//cout << next;
		text.push_back(next);
	}
	
	string *res1 =  new string[word_counter];
	
	for(int i = 0; i < text.size(); i++)
	{
		//cout << "works" << endl;
		for(int j = 0; j < search2.size(); j++)
		{
			if(text[i] == search2[j])
			{
				new_word = true;
				//cout << "true" << endl;
			}
		}
		if(new_word == false)
		{
			res1[x].push_back(text[i]);
			//cout << next;
		}
		else
		{
			x++;
		}
		new_word = false;
	}
	
	size = word_counter;
	
	return res1;
}

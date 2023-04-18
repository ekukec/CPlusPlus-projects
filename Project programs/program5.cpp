#include <iostream>
#include <cstdlib>
#include <cstddef>
#include <cstring>

using namespace std;
 
class StringVar
{
	public:
		StringVar(int size);	 
		StringVar();
		StringVar(const char a[]);
		StringVar(const StringVar& string_object);
		~StringVar();

		int length() const;
		
		void input_line(istream& ins);

		friend ostream& operator <<(ostream& outs, const StringVar& the_string);

		char * copy_piece(const char a[]);
		
		char one_char(const char a);
		
		void set_char(const char a, char new_a);
		
		friend bool operator ==(const StringVar& par1, const StringVar& par2);
		
		friend StringVar operator +(const StringVar& par1, const StringVar& par2);
		
		friend istream& operator >>(istream& in, StringVar& par1);
		
		void operator =(const StringVar& par1);
	
	private:
		char *value;
		int max_length;
};
  
class Text
{
	public:
		Text();
		Text(int size);
		Text(const char a[]);
		Text(const Text& par1);
		~Text();
		
		friend ostream& operator <<(ostream& outs, const Text& par1);
		
		friend istream& operator >>(istream& in, Text& par1);
		
		void input_line(istream& in);
		
		int length() const;
		
		friend bool operator ==(const Text& par1, const Text& par2);
		
		friend Text operator +(const Text& par1, const Text& par2);
		
		void operator =(const Text& par1);
		
	private:
		StringVar* array;
		int word_count;
};

 
void conversation(int max_name_size);


int main()
{
	using namespace std;

	Text t1("check u lol lol"), t2("lol lol"), t3, t4;
	
	cout << t1 << endl;
	
	t1.input_line(cin);
	
	cout << t1 << endl;
	
	cout << t1.length() << " " << t2.length() << endl;
	
	cout << t1 << " " << t2 << endl;
	
	if(t1 == t2)
	{
		cout << "kek" << endl;
	}
	
	t3 = t1 + t2;
	
	cout << t3 << endl;
	
	StringVar s1("find me if u can"), s2;
	
	s2 = s1.copy_piece("can");
	
	cout << s2 << endl;
	
	return 0;
}


void conversation(int max_name_size)
{
	using namespace std;
	
	StringVar your_name(max_name_size), our_name("Borg");
	
	cout << "What is your name?\n";
	your_name.input_line(cin);
	cout << "We are " << our_name << endl;
	cout << "We will meet again " << your_name << endl;
}


StringVar::StringVar(int size) : max_length(size)
{
	value = new char[max_length + 1];
	value[0] = '\0';
}


StringVar::StringVar() : max_length(100)
{
	value = new char[max_length + 1];
	value[0] = '\0';
}


StringVar::StringVar(const char a[]) : max_length(strlen(a))
{
	value = new char[max_length + 1];
	
	strcpy(value, a);
}


StringVar::StringVar(const StringVar& string_object) : max_length(string_object.length( ))
{
	value = new char[max_length + 1];
	strcpy(value, string_object.value);
}

StringVar::~StringVar()
{
	delete [] value;
}


int StringVar::length() const
{
	return strlen(value);
}


void StringVar::input_line(istream& ins)
{
	ins.getline(value, max_length + 1);
}


ostream& operator <<(ostream& outs, const StringVar& the_string)
{
	outs << the_string.value;
	return outs;
}

char * StringVar::copy_piece(const char a[])
{
	char *result, *ret;
	ret = new char[50];
	result = strstr(value, a);
	
	int i = 0;
	while(result[i] == a[i])
	{
		ret[i] = a[i];
		i++;
	}
	ret[i] = '\0';
	
	return ret;
}

char StringVar::one_char(const char a)
{
	for(int i = 0; i < strlen(value); i++)
	{
		if(value[i] == a)
		{
			return a;
		}
	}
}

void StringVar::set_char(const char a, char new_a)
{
	bool set = false;
	for(int i = 0; i < strlen(value); i++)
	{
		if(value[i] == a && set == false)
		{
			value[i] = new_a;
			set = true;
		}
	}
}

bool operator ==(const StringVar& par1, const StringVar& par2)
{
	bool identical = true;
	
	for(int i = 0; i < strlen(par1.value); i++)
	{
		if(par1.value[i] != par2.value[i])
		{
			identical = false;
		}
	}
	
	return identical;
}

StringVar operator +(const StringVar& par1, const StringVar& par2)
{
	StringVar result(par1.max_length + par2.max_length);
	
	
	
	for(int i = 0; i < par1.max_length; i++)
	{
		result.value[i] = par1.value[i];
		
	}
	int x = 0;
	for(int i = par1.max_length; i < result.max_length; i++)
	{
		result.value[i] = par2.value[x];
		x++;
	}
	result.value[result.max_length] = '\0';
	
	return result;
}

istream& operator >>(istream& in, StringVar& par1)
{
	char sentence[par1.length()];
	in >> sentence;
	
	for(int i = 0; i < par1.max_length; i++)
	{
		par1.value[i] = sentence[i];
	}
	par1.value[par1.max_length] = '\0';
	return in;
}

void StringVar::operator =(const StringVar& par1)
{
	int new_length = strlen(par1.value);
	
	if ((new_length) > max_length)
		new_length = max_length;
		
	for (int i = 0; i < new_length; i++)
		value[i] = par1.value[i];
		
	value[new_length] = '\0';
}

//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

Text::Text() : word_count(20)
{
	array = new StringVar[word_count + 1];
	array[0] = ' ';
}

Text::Text(int size) : word_count(size)
{
	array = new StringVar[word_count + 1];
	array[0] = ' ';
}

Text::Text(const char a[])
{
	char word[50];
	
	int space = 1;
	
	for(int i = 0; i < strlen(a); i++)
	{
		if(a[i] == ' ')
		{
			space++;
		}
	}
	
	word_count = space;
	
	//cout << strlen(a) << endl;
	
	array = new StringVar[word_count + 1];
	//cout << "wc + 1: " << word_count + 1;
	array[word_count] = ' ';
	
	int x = 0;
	int y = 0;
	if(word_count > 1)
	{
		for(int i = 0; i < strlen(a); i++)
		{
			if(a[i] != ' ')
			{
				word[x] = a[i];
				//cout << "word " << y << " letter set to: " << a[i] << endl; 
				x++;
			}
			if(a[i] == ' ')
			{
				word[x] = '\0';
				array[y] = word;
				//cout << "Array val " << y << " set to: " << word << endl;
				x = 0;
				y++;
			}
		}
		word[x] = '\0';
		array[y] = word;
		//cout << "Array val " << y << " set to: " << word << endl;
		array[y + 1] = ' ';
	}
	else
	{
		array[0] = a;
		array[1] = ' ';
	}
	
}

Text::Text(const Text& par1) : word_count(par1.word_count)
{
	array = new StringVar[word_count + 1];
	array[word_count] = ' ';
}

Text::~Text()
{
	delete [] array;
}

ostream& operator <<(ostream& outs, const Text& par1)
{
	int i = 0;
	StringVar space(" ");
	while(!(par1.array[i] == space))
	{
		outs << par1.array[i] << " ";
		i++;
	}
	
	return outs;
}

istream& operator >>(istream& in, Text& par1)
{
	in >> par1.array[0];
	par1.array[1] = ' ';
	
	return in;
}

void Text::input_line(istream& in)
{
	char word[50], a[100];
	
	in.getline(a, 100);
	
	int space = 1;
	
	for(int i = 0; i < strlen(a); i++)
	{
		if(a[i] == ' ' && a[i + 1] == ' ')
		{
			int spc = i + 1;
			while(a[spc] == ' ')
			{
				spc++;
				//cout << "Extra blank spotted at: " << spc << endl;
			}
			i = spc;
			space++;
		}
		else if(a[i] == ' ')
		{
			space++;
		}
	}
	
	word_count = space;
	
	//cout << strlen(a) << endl;
	
	array = new StringVar[word_count + 1];
	//cout << "wc + 1: " << word_count + 1 << endl;;
	array[word_count] = ' ';
	
	int x = 0;
	int y = 0;
	if(word_count > 1)
	{
		for(int i = 0; i < strlen(a); i++)
		{
			if(a[i] != ' ')
			{
				word[x] = a[i];
				//cout << "word " << y << " letter set to: " << a[i] << endl; 
				x++;
			}
			else if(a[i] == ' ' && a[i + 1] == ' ')
			{
				int spc = i;
				while(a[spc + 1] == ' ')
				{
					//cout << "Extra blank spotted at: " << spc << endl;
					spc++;
				}
				//cout << "i before " << i << endl;
				i = spc;
				//cout << "i now set to " << i << endl;
				
				word[x] = '\0';
				array[y] = word;
				//cout << "Array val " << y << " set to: " << word << endl;
				x = 0;
				y++;
			}
			else if(a[i] == ' ')
			{
				word[x] = '\0';
				array[y] = word;
				//cout << "Array val " << y << " set to: " << word << endl;
				x = 0;
				y++;
			}
		}
		word[x] = '\0';
		array[y] = word;
		//cout << "Array val " << y << " set to: " << word << endl;
		array[y + 1] = ' ';
	}
	else
	{
		array[0] = a;
		array[1] = ' ';
	}
}

int Text::length() const
{
	int i = 0;
	int counter = 0;
	while(!(array[i] == ' '))
	{
		i++;
		counter++;
	}
	
	return counter;
}

bool operator ==(const Text& par1, const Text& par2)
{
	bool same = true;
	if(par1.length() == par2.length())
	{
		for(int i = 0; i < par1.length(); i++)
		{
			if(!(par1.array[i] == par2.array[i]))
			{
				same = false;
			}
		}
	}
	return same;
}

Text operator +(const Text& par1, const Text& par2)
{
	Text result(par1.length() + par2.length());
	
	for(int i = 0; i < par1.length(); i++)
	{
		result.array[i] = par1.array[i];
		//cout << "result " << i << " set to " << result.array[i] << endl;
		
	}
	int x = 0;
	for(int i = par1.length(); i < result.word_count; i++)
	{
		result.array[i] = par2.array[x];
		//cout << "result " << i << " set to " << result.array[i] << endl;
		x++;
	}
	result.array[result.word_count] = ' ';
	
	return result;
}

void Text::operator =(const Text& par1)
{
	int new_length = par1.length();
	
	if ((new_length) > word_count)
		new_length = word_count;
		
	for (int i = 0; i < new_length; i++)
		array[i] = par1.array[i];
		
	array[new_length] = ' ';
}

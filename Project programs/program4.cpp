#include <iostream>
#include <cstdlib>
#include <cstddef>
#include <cstring>

using namespace std;
 
class StringVar
{
	public:
		StringVar(int size);
		//Initializes the object so it can accept string values up to size
		//in length. Sets the value of the object equal to the empty string.
		 
		StringVar();
		//Initializes the object so it can accept string values of length 100
		//or less. Sets the value of the object equal to the empty string.
		 
		StringVar(const char a[]);
		//Precondition: The array a contains characters terminated with '\0'.
		//Initializes the object so its value is the string stored in a and
		//so that it can later be set to string values up to strlen(a) in length.
		 
		StringVar(const StringVar& string_object);
		//Copy constructor.
		 
		~StringVar();
		//Returns all the dynamic memory used by the object to the freestore.
		 
		int length() const;
		//Returns the length of the current string value.
		void input_line(istream& ins);
		//Precondition: If ins is a file input stream, then ins has been
		//connected to a file.
		//Action: The next text in the input stream ins, up to '\n', is copied
		//to the calling object. If there is not sufficient room, then
		//only as much as will fit is copied.
		friend ostream& operator <<(ostream& outs, const StringVar& the_string);
		//Overloads the << operator so it can be used to output values
		//of type StringVar
		//Precondition: If outs is a file output stream, then outs
		//has already been connected to a file.
		char * copy_piece(const char a[]);
		
		char one_char(const char a);
		
		void set_char(const char a, char new_a);
		
		friend bool operator ==(const StringVar& par1, const StringVar& par2);
		
		friend StringVar operator +(const StringVar& par1, const StringVar& par2);
		
		friend istream& operator >>(istream& in, StringVar& par1);
		
		void operator =(const StringVar& par1);
	
	private:
		char *value; //pointer to dynamic array that holds the string value.
		int max_length; //declared max length of any string value.
};
  

 
//Program to demonstrate use of the class StringVar.
 
void conversation(int max_name_size);
//Carries on a conversation with the user.

int main()
{
	using namespace std;
	//conversation(30);
	cout << "End of demonstration.\n";
	
	StringVar s1("it works "), s2("finally"), s3, s4("S");
	
	cin >> s3;
	
	if(s2 == s3)
	{
		cout << "Correct" << endl;
	}
	else
	{
		cout << "False" << endl;
	}
	
	cout << s3 << endl;
	
	cout << s1 << endl;
	
	cout << s4 << endl;
	
	s3 = s4;
	
	cout << "New s3: " << s3 << endl;
	
	s3 = s1 + s2;
	
	cout << s3 << endl;
	
	cout << "yay" << endl;
	
	
	return 0;
}

//This is only a demonstration function:
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
	value = new char[max_length + 1];//+1 is for '\0'.
	value[0] = '\0';
}

//Uses cstddef and cstdlib:
StringVar::StringVar() : max_length(100)
{
	value = new char[max_length + 1];//+1 is for '\0'.
	value[0] = '\0';
}

//Uses cstring, cstddef, and cstdlib:
StringVar::StringVar(const char a[]) : max_length(strlen(a))
{
	value = new char[max_length + 1];//+1 is for '\0'.
	
	strcpy(value, a);
}

//Uses cstring, cstddef, and cstdlib:
StringVar::StringVar(const StringVar& string_object) : max_length(string_object.length( ))
{
	value = new char[max_length + 1];//+1 is for '\0'.
	strcpy(value, string_object.value);
}

StringVar::~StringVar()
{
	delete [] value;
}

//Uses cstring:
int StringVar::length() const
{
	return strlen(value);
}

//Uses iostream:
void StringVar::input_line(istream& ins)
{
	ins.getline(value, max_length + 1);
}

//Uses iostream:
ostream& operator <<(ostream& outs, const StringVar& the_string)
{
	outs << the_string.value;
	return outs;
}

char * StringVar::copy_piece(const char a[])
{
	return strstr(value, a);
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
	
	//cout << "Result lenght is: " << result.max_length << endl;
	
	for(int i = 0; i < par1.max_length; i++)
	{
		result.value[i] = par1.value[i];
		//cout << "Result value " << i << " set to: " << par1.value[i] << endl;
	}
	int x = 0;
	for(int i = par1.max_length; i < result.max_length; i++)
	{
		result.value[i] = par2.value[x];
		//cout << "Result value " << i << " set to: " << par2.value[x] << endl;
		x++;
	}
	result.value[result.max_length] = '\0';
	
	return result;
}

istream& operator >>(istream& in, StringVar& par1)
{
	char sentence[par1.length()];
	in >> sentence;
	//cout << "Sentence entered is: " << sentence << endl;
	for(int i = 0; i < par1.max_length; i++)
	{
		par1.value[i] = sentence[i];
		//cout << "Value " << i << " set to: " << sentence[i] << endl;
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

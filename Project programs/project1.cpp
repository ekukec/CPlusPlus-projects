#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;



ifstream inp_strm;
ofstream out_strm; 

char name[100];

void read();

void enter();





int main()
{
	enter();
	
	read();
	
	return 0;
}





void read()
{
	char next1, next2, next3, read, read2;
	int f = 0, i = 0;
	bool readon = true;
	
	inp_strm.open("msg.dat");
	out_strm.open("msg_ed.dat");
	cout << "Outputing message: " << endl;
	do
	{
		if(readon ==  true)
		{
			read = next3;
		}
		else
		{
			read2 = next1;
		}
		
		
		next3 = next2;
		next2 = next1;
		
		inp_strm.get(next1);
		
		cout << next1;
		
		if(readon == false)
		{
			out_strm << read2;
		}
		
		if((next1 == '#' && next2 == 'N') && next3 == '#')
		{
			readon = false;
			out_strm << ' ';
			cout << "Enter your name: ";
			cin >> name;
			out_strm << name;
			inp_strm.get(next1);
		}
		
		if(i > 2 && readon == true)
		{
			out_strm << read;
		}
		
		if(next1 == '\n' && next2 == '\n')
		{
			f = 2;
		}
		
		i++;
	}while(f < 2);
	
	out_strm << next1;
	
	out_strm.close();
	inp_strm.close();
}

void enter()
{
	char advice1, advice2;
	int f = 0;

	out_strm.open("msg.dat");
	cout << "Enter message: ";
	do
	{
		advice2 = advice1;
		cin.get(advice1);
		out_strm << advice1;
		if(advice1 == '\n' && advice2 == '\n')
		{
			f = 2;
		}
	}while(f < 2);
	out_strm.close();
}

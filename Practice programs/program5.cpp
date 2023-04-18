#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;



ifstream inp_strm;
ofstream out_strm; 

void enter();

void read();


int main()
{
	
	read();
	
	enter();
	
	return 0;
}



void enter()
{
	char advice1, advice2;
	int f = 0;

	out_strm.open("advice.dat");
	cout << "Enter your advice: ";
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

void read()
{
	char next1, next2;
	int f = 0;
	
	inp_strm.open("advice.dat");
	cout << "Outputing advice: " << endl;
	do
	{
		next2 = next1;
		inp_strm.get(next1);
		cout << next1;
		if(next1 == '\n' && next2 == '\n')
		{
			f = 2;
		}
	}while(f < 2);
	
	inp_strm.close();
}



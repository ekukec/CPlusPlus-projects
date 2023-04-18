#include <iostream>
#include <fstream>
using namespace std;



ifstream inp_strm;
ofstream out_strm; 

void enter();

void read();



int main()
{
	enter();
	
	read();
	
	return 0;
}



void enter()
{
	int howmany, number;
	
	cout << "How many numbers do u wish to enter?";
	cin >> howmany;
	
	out_strm.open("numbers.dat");
	for(int i = 0; i < howmany; i++)
	{
		cout << "Enter number " << i + 1 << " : ";
		cin >> number;
		out_strm << number << "\n";
	}
	out_strm.close();
}

void read()
{
	int next, f = 0, smallest = 0, biggest = 0;
	
	inp_strm.open("numbers.dat");
	while(inp_strm >> next)
	{
		f++;
		cout << "Input stream number " << f << ": " << next << endl;
		if(next < smallest || f==1)
		{
			smallest = next;
		}
		if(next > biggest)
		{
			biggest = next;
		}
	}
	
	cout << "Biggest: " << biggest << endl << "Smallest: " << smallest << endl;
	
	inp_strm.close();
}


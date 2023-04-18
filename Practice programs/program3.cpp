#include <iostream>
#include <fstream>
using namespace std;



ifstream inp_strm;
ofstream out_strm; 

void enter(int& howmany);

void read();

void sort(int& howmany);

int main()
{
	int howmany = 0;
	
	enter(howmany);
	
	sort(howmany)
	
	read();
	
	return 0;
}



void enter(int& howmany)
{

	double number;
	
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
	int next, f = 0, avg = 0;
	
	inp_strm.open("numbers.dat");
	while(inp_strm >> next)
	{
		f++;
		cout << "Input stream number " << f << ": " << next << endl;
		avg = avg + next;
	}
	
	cout << "Average: " << avg/f << endl;
	
	inp_strm.close();
}

void sort(int& howmany)
{
	int next, first, second;
	double med[howmany];
	
	inp_strm.open("numbers.dat");
	out_strm.open("numbers.dat");
	
	while(inp_strm >> next)
	{
		bool slj = true;
		for(int i = 0; i < howmany; i++)
		{
			if(next > med[i])
			{
				
			}
			else
			{
				
			}
		}
	}
	
	inp_strm.close();
	out_strm.close();
}

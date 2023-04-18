#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int rows = 0;
int numbers = 0;

ifstream inp_strm;
ofstream out_strm; 

void read_avg(ifstream& stream, ofstream& outstream);

void write(ofstream& stream);

void row(ifstream& stream);

void numb();

int main()
{	
	out_strm.open("project3.dat", ios::app);
	
	//write(out_strm);
	
	out_strm.close();
	
	
	inp_strm.open("project3.dat");
	
	row(inp_strm);
	
	inp_strm.close();
	
	
	
	out_strm.open("project3_avg.dat");
	inp_strm.open("project3.dat");
	
	read_avg(inp_strm, out_strm);
	
	out_strm.close();
	inp_strm.close();
	
	
	
	return 0;
}

void read_avg(ifstream& instream, ofstream& outstream)
{
	char next[100];
	int i = 0;
	int avg = 0, num = 0;
	bool brk = false;
	
	for(int x = 0; x < rows; x++)
	{	
		numb();
	 	i = 0;
	 	avg = 0;
		instream >> next;
		outstream << next << ' ';
		cout << next << ' ';
		instream >> next;
		outstream << next << ' ';
		cout << next << ' ';	
		while(i < numbers)
		{	
			instream >> num;
			i++;

			avg =  avg + num;
			

			outstream << num << ' ';
			cout << num << ' ';
			
			if(i == numbers)
			{
				avg = avg/10;
				outstream << avg << endl;
				cout << avg << endl;	
			}
		}		
	}
}

void write(ofstream& stream)
{
	char again;
	char lname[50], fname[50];
	int score;
	
	do
	{
		cout << "Enter last name: ";
		cin >> lname;
		stream << lname;
		stream << ' ';
		cout << endl;
		
		cout << "Enter first name: ";
		cin >> fname;
		stream << fname;
		stream << ' ';
		cout << endl;
		
		for(int i = 0; i < 10; i++)
		{
			cout << "Enter the score for quiz " << i+1 << " :";
			cin >> score;
			stream << score;
			stream << ' ';
			cout << endl;
		}
		
		stream << endl;
		
		cout << "Do you wish to enter another student? (Y/N): ";
		cin >> again;
		
		
	}while(again == 'y' || again == 'Y');
}

void row(ifstream& stream)
{
	char next;

	while(stream.get(next))
	{
		if(next == '\n')
		{
			rows++;
		}
	}
}

void numb()
{
	char next;
	int num = 0;
	
	inp_strm.open("project3.dat");
	
	for(int i = 0; i < rows; i++)
	{
			
		while(inp_strm.get(next))
		{
			if(next == ' ')
			{
				num++;
			}
		}
	}
	
	inp_strm.close();
	
	num = num - 2;
	numbers = num;
}


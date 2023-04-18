#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;


class Postnet
{
	public:
		int return_zip_int();
		string return_zip_str();
		Postnet(int code);
		Postnet(string code);
	private:
		string int_to_str(int code);
		int str_to_int(string code);
		string zip_code;
};


int main()
{
	Postnet post1("110100101000101011000010011"), post2(57392), post3("110010110000001100101001101");
	
	post1.return_zip_int();
	
	post1.return_zip_str();
	
	post2.return_zip_int();
	
	post2.return_zip_str();
	
	post3.return_zip_int();
	
	
	
	return 0;
}

int Postnet::return_zip_int()
{
	return str_to_int(zip_code);
}

string Postnet::return_zip_str()
{
	cout << zip_code << endl;
	return zip_code;
}

Postnet::Postnet(int code) : zip_code(int_to_str(code))
{
	
}

Postnet::Postnet(string code) : zip_code(code)
{
	
}

string Postnet::int_to_str(int code)
{
	string temp;
	
	int x[5] = {10000, 1000, 100, 10, 1};
	int z[5] = {0, 10000, 1000, 100, 10};
	int y = 0;
	int div;
	
	temp = temp + "1";
	for(int i = 1; i < 26; i = i + 5)
	{
		if(y == 0)
		{
			div = (code / x[y]);
			cout << code << "/" << x[y] << " = " << div << endl;
		}
		else
		{
			div = (code / x[y]) - ((code / z[y]) * 10);
			cout << code << "/" << x[y] << " - " << code << "/" << z[y] << " * " << 10 << " = " << div << endl;
		}
		
		
		switch(div)
		{
			case 0:
				temp.insert(i, "11000");
				break;
				
			case 1:
				temp.insert(i, "00011");
				break;
				
			case 2:
				temp.insert(i, "00101");
				break;
				
			case 3:
				temp.insert(i, "00110");
				break;
				
			case 4:
				temp.insert(i, "01001");
				break;
				
			case 5:
				temp.insert(i, "01010");
				break;
				
			case 6:
				temp.insert(i, "01100");
				break;
				
			case 7:
				temp.insert(i, "10001");
				break;
				
			case 8:
				temp.insert(i, "10010");
				break;
				
			case 9:
				temp.insert(i, "10100");
				break;
		}	
		y++;
	}
	temp = temp + "1";
	
	cout << temp << endl;
	
	return temp;
}

int Postnet::str_to_int(string code)
{
	int y, z = 0, sum;
	int x[5] = {0, 1, 2, 4, 7};
	int num[5];
	
	for(int i = 1; i < 26; i = i + 5)
	{
		//cout << "1Step " << i << endl; 
		y = 4;
		sum = 0;
		for(int j = i; j < i + 5; j++)
		{
			//cout << "2Step " << j << endl;
			if(code[j] == '1')
			{
				sum = sum + x[y];
			}
			y--;
		}
		if(sum == 11)
		{
			sum = 0;
		}
		num[z] = sum;
		z++;
	}
	
	for(int i = 0; i < 5; i++)
	{
		cout << num[i];
	}
	
	cout << endl;
	
	//return num;
}

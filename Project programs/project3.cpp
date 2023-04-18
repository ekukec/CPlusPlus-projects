#include <iostream>
using namespace std;

int main()
{
	double number;
	int result;
	char again;



	do
	{
		do
		{
			cout << "Enter the number which u wish to convert into roman format: ";
			cin >> number;
			
		}while(number < 0);
		
		if((number/1000) > 0)
		{
			result = (int)(number/1000);
			
			for(; result > 0; result--)
			{
				cout << "M";
				number = number - 1000;
			}	
		}
		
		if((number/900) > 0)
		{
			result = (int)(number/900);
			
			for(; result > 0; result--)
			{
				cout << "CM";
				number = number - 900;
			}
		}
		
		if((number/500) > 0)
		{
			result = (int)(number/500);
			
			for(; result > 0; result--)
			{
				cout << "D";
				number = number - 500;
			}
		}
		
		if((number/400) > 0)
		{
			result = (int)(number/400);
			
			for(; result > 0; result--)
			{
				cout << "CD";
				number = number - 400;
			}
		}
		
		if((number/100) > 0)
		{
			result = (int)(number/100);
			
			for(; result > 0; result--)
			{
				cout << "C";
				number = number - 100;
			}
		}
		
		if((number/90) > 0)
		{
			result = (int)(number/90);
			
			for(; result > 0; result--)
			{
				cout << "XC";
				number = number - 90;
			}
		}
		
		if((number/50) > 0)
		{
			result = (int)(number/50);
			
			for(; result > 0; result--)
			{
				cout << "L";
				number = number - 50;
			}
		}
		
		if((number/40) > 0)
		{
			result = (int)(number/40);
			
			for(; result > 0; result--)
			{
				cout << "XL";
				number = number - 40;
			}
		}
		
		if((number/10) > 0)
		{
			result = (int)(number/10);
			
			for(; result > 0; result--)
			{
				cout << "X";
				number = number - 10;
			}
		}
		
		if((number/9) > 0)
		{
			result = (int)(number/9);
			
			for(; result > 0; result--)
			{
				cout << "IX";
				number = number - 9;
			}
		}
		
		if((number/5) > 0)
		{
			result = (int)(number/5);
			
			for(; result > 0; result--)
			{
				cout << "V";
				number = number - 5;
			}
		}
		
		if((number/4) > 0)
		{
			result = (int)(number/4);
			
			for(; result > 0; result--)
			{
				cout << "IV";
				number = number - 4;
			}
		}
		
		if((number/1) > 0)
		{
			result = (int)(number/1);
			
			for(; result > 0; result--)
			{
				cout << "I";
				number = number - 1;
			}
		}
		
		cout << endl;
		cout << "Do you wish to convert again? (Y/N): ";
		cin >> again;
		cout << endl;
		
	}while(again == 'Y' || again == 'y');
		
	
	return 0;
}

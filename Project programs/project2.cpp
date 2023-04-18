#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double a, b, c, formula1, formula2, discr;
	char again;
	
	do
	{
		
		cout << "Enter a: ";
		cin >> a;
		cout << "Enter b: ";
		cin >> b;
		cout << "Enter c: ";
		cin >> c;
		
		formula1 = (-b + sqrt((b*b) - 4 * a * c)) / (2 * a);
		formula2 = (-b - sqrt((b*b) - 4 * a * c)) / (2 * a);
		
		discr = ((b*b) - 4 * a * c);
		
		cout << "Discriminant: " << discr << endl;
		
		if(discr == 0)
		{
			formula1 = -b / (2 * a);
			cout << "The equation only has one real root: " << formula1 << endl;
		}
		else if(discr > 0)
		{
			formula1 = (-b + sqrt((b*b) - 4 * a * c)) / (2 * a);
			formula2 = (-b - sqrt((b*b) - 4 * a * c)) / (2 * a);
			cout << "The equation has two real roots\nRoot 1: " << formula1 << endl << "Root 2: " << formula2 << endl;
		}
		else if(discr < 0)
		{
			formula1 = -b / (2 * a);
			formula2 = (sqrt(-discr)) / (2 * a);
			cout << "The equation has two complex roots\nRoot 1: " << formula1 << " + " << formula2 << endl 
				<< "Root 2: " << formula1 << " - " << formula2 << endl;
		}
		else
		{
			cout << "There has been an error" << endl;	
		}
		
		cout << "Do you wish to calculate again? (Y/N): ";
		cin >> again;
		
	}while(again == 'Y' || again == 'y');
	
	return 0;
}

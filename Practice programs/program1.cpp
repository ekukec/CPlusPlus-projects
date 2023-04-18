#include <iostream>
#include <cstring>

using namespace std;


int main()
{
	char name[35], age[5], title[40], next;
	
	cout << "Enter name, age and title separated by a space" << endl;
	
	
	int i = 0, x = 1, z = 0;
	
	cin.get(next);
	while(next != '\n')
	{
		if(next != ' ')
		{
			if(x == 1)
			{
				name[z] = next;
				z++;
			}
			else if(x == 2)
			{
				age[z] = next;
				z++;
			}
			else if(x == 3)
			{
				title[z] = next;
				z++;
			}	
		}
		else
		{
			x++;
			z = 0;
		}
		cin.get(next);
	}	
	
	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
	cout << "Title: " << title << endl;
	
	return 0;
}

#include <iostream>
#include <string>

using namespace std;


int main()
{
	string first_name, last_name, middle;
	bool middle_entered;
	char mid;
	
	
	cout << "Enter first name: ";
	getline(cin, first_name);
	
	cout << "Do u want to enter a middle name?(Y/N): ";
	cin >> mid;
	cin.ignore();
	
	if(mid == 'Y' || mid == 'y')
	{
		cout << "Enter middle name: ";
		getline(cin, middle);
		middle_entered = true;
	}
	
	cout << "Enter last name: ";
	getline(cin, last_name);
	
	
	if(middle[1] == '.' && middle_entered == true)
	{
		cout << last_name << ", " << middle[0] << middle[1] << " " << first_name << endl;
	}
	else if (middle[1] != '.' && middle_entered == true)
	{
		cout << last_name << ", " << middle[0] << ". " << first_name << endl;
	}
	
	if(middle_entered == false)
	{
		cout << last_name << ", " << first_name << endl;
	}
	
	
	
	return 0;
}

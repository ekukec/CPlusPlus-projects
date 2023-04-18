#include <iostream>
#include <string>
using namespace std;

int main()
{
	string instructor, name, food, adjective, color, animal;
	int number;
	
	cout << "Enter the first or last name of your instructor: ";
	cin >> instructor;
	cout << "Enter your name: ";
	cin >> name;
	cout << "Enter a food: ";
	cin >> food;
	cout << "Enter a number between 100 and 120: ";
	do
	{
		cin >> number;	
	}while((number < 100) || (number > 120));
	
	cout << "Enter an adjective: ";
	cin >> adjective;
	cout << "Enter a color: ";
	cin >> color;
	cout << "Enter an animal: ";
	cin >> animal;
	
	cout << "Dear Instructor " << instructor << ",\n" << 
	"I am sorry that I am unable to turn in my homework at this time. First,\n" << 	
	"I ate a rotten " << food << ", which made me turn " << color << " and extremely ill. I\n" << 
	"came down with a fever of " << number << ". Next, my " << adjective << " pet\n" <<
	animal << " must have smelled the remains of the " << food << " on my homework,\n" <<
	"because he ate it. I am currently rewriting my homework and hope you\n" <<
	"will accept it late.\n" <<
	"Sincerely,\n" <<
	name << endl;
	
	
	return 0;
}

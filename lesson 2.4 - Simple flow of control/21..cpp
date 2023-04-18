#include <iostream>
using namespace std;

int main()
{
	int variable_score;
	
	cout << "Enter the value of the score: ";
	cin >> variable_score;
	
	if(variable_score > 100)
		cout << "High" << endl;
	else
		cout << "Low" << endl;
		
	return 0;
}

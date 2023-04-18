#include <iostream>
using namespace std;

int main()
{
	int exam, programs_done;
	
	cout << "Enter the value of the exam: ";
	cin >> exam;
	cout << "Enter the number of programs done: ";
	cin >> programs_done;
	
	if((exam >= 60)&&(programs_done >= 10))
		cout << "Passed" << endl;
	else
		cout << "Failed" << endl;
	
	return 0;
}

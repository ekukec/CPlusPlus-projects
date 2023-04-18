#include <iostream>
#include <ctime>
#include "queue.h"
using namespace std;
using namespace queue;


int main()
{
	int choice;
	Queue q1;
	
	do
	{
		cout << "==========================================================================================" << endl;
		cout << "Enter '1' to simulate a customer's arrival, '2' to help the next customer, or '3' to quit." << endl;
		cout << "Choice: ";
		cin >> choice;
		
		switch(choice)
		{
			case 1:
				q1.enter();
				break;
			
			case 2:
				q1.help();
				break;
		}
		
	}while(choice != 3);
	
	
	
	return 0;
}

#include <iostream>
using namespace std;

int main()
{
	int exercises, score_recieved, score_possible, counter = 1;
	double sum_recieved, sum_possible;
	
	cout << "Enter the number of exercises: ";
	cin >> exercises;
	
	while(exercises > 0)
	{
		cout << "=======================================================================" << endl;
		cout << "Enter the score recieved for the exercise number " << counter << " :";
		cin >> score_recieved;
		cout << "Enter the score possible for the exercise number " << counter << " :";
		cin >> score_possible;
		cout << "=======================================================================" << endl;
		
		sum_recieved = sum_recieved + score_recieved;
		sum_possible = sum_possible + score_possible;
		
		exercises--;
		counter++;
	}
	
	cout << "Your total is " << sum_recieved << " out of " << sum_possible << ", or " << (sum_recieved/sum_possible) * 100 << "%" << endl;

	return 0;
}

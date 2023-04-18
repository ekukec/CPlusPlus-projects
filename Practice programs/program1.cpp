#include <iostream>
#include <deque>
#include <cstdlib>
#include <algorithm>
using namespace std;




int main()
{
	deque <double> dubs;
	double v;
	
	for(int i = 0; i < 10; i++)
	{
		v = (rand() % 100) + (rand() % 100 / 100.0);
		cout << v << endl;
		dubs.push_back(v);
	}
	
	cout << "============" << endl;
	cout << "Size: " << dubs.size() << endl;
	cout << "============" << endl;
	
	sort(dubs.begin(), dubs.end());
	
	deque <double> :: iterator show;
	for(show = dubs.begin(); show != dubs.end(); show++)
	{
		cout << *show << endl;
	}
	
	
	return 0;
}

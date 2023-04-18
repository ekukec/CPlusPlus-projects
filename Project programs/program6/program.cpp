#include <iostream>
#include <cstdlib>
#include "queue.h"
#include "queue.cpp"
using namespace std;



int main()
{
	Queue<int> test1(10);
	
	for(int i = 0; i < 10; i++)
	{
		test1.Add(rand() % 100, rand() % 10);
	}
	
	test1.Output();
	
	for(int i = 0; i < 5; i++)
	{
		test1.Remove();
		test1.Output();
	}
	
	for(int i = 0; i < 5; i++)
	{
		test1.Add(rand() % 100, rand() % 10);
		test1.Output();
	}
	
	
	cout << "Front: " << test1.get_front() << endl;
	cout << "Rear: " << test1.get_rear() << endl;
	
	test1.~Queue();
	
	return 0;
}

#include <iostream>
#include <cstdlib>
#include "stack.h"
#include "stack.cpp"
using namespace std;



int main()
{
	Stack<int> test1(15);
	Stack<char> test2(15);
	
	for(int i = 0; i < test1.get_max_size(); i++)
	{
		test1.Add(rand() % 100);
	}
	
	test1.output();
	
	
	for(int i = 0; i < test2.get_max_size(); i++)
	{
		test2.Add('a' + rand() % 26);
	}
	
	test2.output();
	
	test1.~Stack();
	test2.~Stack();
	
	return 0;
}

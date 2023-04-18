#ifndef STACK_CPP
#define STACK_CPP
#include <iostream>
#include "stack.h"
using namespace std;


template<class S>
Stack<S>::Stack(int the_max_size) : max_size(the_max_size), current_size(0)
{
	head = new S[max_size];
}

template<class S>
Stack<S>::~Stack()
{
	delete [] head;
}

template<class S>
void Stack<S>::Add(S value)
{
	if(current_size == max_size)
	{
		cout << "Stack full" << endl;	
	}
	else
	{
		head[current_size] = value;
		current_size++;
	}
}

template<class S>
void Stack<S>::Remove()
{
	if(current_size == 0)
	{
		cout << "Stack empty" << endl;	
	}
	else
	{
		current_size--;
	}
}

template<class S>
int Stack<S>::get_size()
{
	return current_size;
}

template<class S>
int Stack<S>::get_max_size()
{
	return max_size;
}

template<class S>
void Stack<S>::output()
{
	for(int i = 0; i < current_size; i++)
	{
		cout << i + 1 << ": " << head[i] << endl;
	}
}


#endif

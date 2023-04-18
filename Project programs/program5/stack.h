#ifndef STACK_H
#define STACK_H
#include <iostream>

template<class S>
class Stack
{
	public:
		Stack(int the_max_size);
		~Stack();
		void Add(S value);
		void Remove();
		int get_size();
		int get_max_size();
		void output();
		
	private:
		S* head; 
		int max_size;
		int current_size;
};


#endif

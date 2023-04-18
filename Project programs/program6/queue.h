#ifndef QUEUE_H
#define QUEUE_H
#include <iostream>
using namespace std;

template<class Q>
class Queue
{
	public:
		Queue(int the_max_size);
		~Queue();
		void Add(Q value, int the_priority);
		void Remove();
		void Output();
		int get_front();
		int get_rear();
		
	
	private:
		int front;
		int rear;
		Q* queue;
		int* priority;
		int current_size;
		int max_size;	
};

#endif

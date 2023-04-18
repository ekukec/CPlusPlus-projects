#ifndef QUEUE_CPP
#define QUEUE_CPP
#include <iostream>
#include "queue.h"
using namespace std;

template<class Q>
Queue<Q>::Queue(int the_max_size) : max_size(the_max_size), current_size(0), front(the_max_size - 1), rear(the_max_size - 1)
{
	queue = new Q[max_size];
	priority = new int[max_size];
}

template<class Q>
Queue<Q>::~Queue()
{
	delete [] queue;
}

template<class Q>
void Queue<Q>::Add(Q value, int the_priority)
{
	cout << "V: " << value << " P: " << the_priority << endl;
	if(rear == front && current_size > 0)
	{
		cout << "Queue full" << endl;
	}
	else
	{
		if(rear != max_size - 1 && the_priority > priority[rear + 1])
		{
			int i = 1, j = -1;
			int itemp;
			int Qtemp;
			
			
			while(the_priority > priority[rear + i] && rear + i != front)
			{
				//cout << "A1" << endl;
				queue[(rear + i) + j] = queue[rear + i];
				priority[(rear + i) + j] = priority[rear + i];
				
				if((rear + i) == max_size - 1)
				{
					//cout << "A11" << endl;
					i = -rear + 1;
					j = max_size - 1;
				}
				else
				{
					//cout << "A12" << endl;
					i++;
					j = -1;
				}
			}
			
			
			if(rear + i == front && the_priority > priority[front])
			{
				//cout << "A2" << endl;
				queue[(rear + i) + j] = queue[rear + i];
				priority[(rear + i) + j] = priority[rear + i];
				
				queue[rear + i] = value;
				priority[rear + i] = the_priority;
			}
			else
			{
				//cout << "A3" << endl;
				queue[rear + i - 1] = value;
				priority[rear + i - 1] = the_priority;
			}
		}
		else if(rear == max_size - 1 && the_priority > priority[rear - rear])
		{
			int i = -rear, j = max_size - 1;
			int itemp;
			int Qtemp;
			
			
			while(the_priority > priority[rear + i] && rear + i != front)
			{
				queue[(rear + i) + j] = queue[rear + i];
				priority[(rear + i) + j] = priority[rear + i];
				
				if(j == max_size - 1)
				{
					j = -1;
				}
				i++;
				
			}
			
			
			if(rear + i == front && the_priority > priority[front])
			{
				queue[(rear + i) + j] = queue[rear + i];
				priority[(rear + i) + j] = priority[rear + i];
				
				queue[rear + i] = value;
				priority[rear + i] = the_priority;
			}
			else
			{
				queue[rear + i - 1] = value;
				priority[rear + i - 1] = the_priority;
			}
		}
		else
		{
			queue[rear] = value;
			priority[rear] = the_priority;
		}
		
		
		if(rear == 0)
		{
			rear = max_size - 1;
		}
		else
		{
			rear--;
		}
		current_size++;
	}
}

template<class Q>
void Queue<Q>::Remove()
{
	if(front == rear && current_size == 0)
	{
		cout << "Queue empty" << endl;
	}
	else
	{
		if(front == 0)
		{
			front = max_size - 1;
		}
		else
		{
			front--;	
		}
		current_size--;
	}	
}

template<class Q>
void Queue<Q>::Output()
{
	//cout << "A" << endl;
	cout << "Front " << front << endl;
	cout << "Rear " << rear << endl;
	int x = 1;
	//int test;
	if(front == rear && current_size > 0)
	{
		cout << x << ": (" << queue[front] << ", " << priority[front] << ")" << endl;
		x++;
		
		for(int i = front - 1; i != rear; i--)
		{
			cout << x << ": (" << queue[i] << ", " << priority[i] << ")" << endl;
			x++;
			if(i == 0)
			{
				i = max_size;
			}
			//cin >> test;
		}
		 
	}
	else if(front != rear && current_size > 0)
	{
		int x = 1;
		
		for(int i = front; i != rear; i--)
		{
			cout << x << ": (" << queue[i] << ", " << priority[i] << ")" << endl;
			x++;
			if(i == 0)
			{
				i = max_size;
			}
		}
	}
}

template<class Q>
int Queue<Q>::get_front()
{
	return front;
}

template<class Q>
int Queue<Q>::get_rear()
{
	return rear;
}


#endif

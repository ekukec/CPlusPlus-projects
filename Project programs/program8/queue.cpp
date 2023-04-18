#include <iostream>
#include <ctime>
#include "queue.h"
using namespace std;

namespace queue
{
	Queue::Queue() : head(NULL), back(NULL), ticket(0), avg_ttw(0)
	{
		
	}
	
	void Queue::enter()
	{
		NodePtr temp;
		temp = new Node;
		ticket++;
		
		temp->ticket_num = ticket;
		temp->time = static_cast<long>(time(NULL));
		
		if(head == NULL)
		{
			temp->link = head;
			head = temp;
			back = temp;
		}
		else
		{
			temp->link = back->link;
			back->link = temp;
			back = temp;
		}
		
		cout << "Customer " << temp->ticket_num << " entered at time " << temp->time << endl;
	}
	
	void Queue::help()
	{
		NodePtr del;
		del = head;
		int time_waited = static_cast<long>(time(NULL)) - del->time;
		cout << avg_ttw << " + " << time_waited << " / " << del->ticket_num << endl;
		avg_ttw = (avg_ttw + time_waited) / del->ticket_num;
		
		
		del->time = static_cast<long>(time(NULL));
		cout << "Customer " << del->ticket_num << " is being helped at the time " << del->time << endl;
		if(ticket > 2)
		{
			cout << "Time spent waiting is " << time_waited << " sec" << endl;
			cout << "Estimated time for next customer " << avg_ttw << " sec" << endl; 
		}
		
		head = head->link;
		delete del;
	}
}


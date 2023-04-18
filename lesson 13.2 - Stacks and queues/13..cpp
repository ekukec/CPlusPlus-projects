Queue::~Queue()
{
	if(front == NULL)
	{
		cout << "Queue already empty" << endl;
	}
	else
	{
		QueueNodePtr del;
		
		while(front != NULL)
		{
			del = front;
			front = front->link;
			delete del;
		}
		
		
	}
}

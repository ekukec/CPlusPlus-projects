Queue::Queue(const Queue& aQueue)
{
	if(aQueue.front == NULL)
	{
		front = NULL;
		back = NULL;
	}
	else
	{
		QueueNodePtr temp = aQueue.front;
		QueueNodePtr new_el;
		
		front = new QueueNode;
		front->data = temp->data;
		front->link = NULL;
		back = front;
		
		temp = temp->link;
		while(temp != NULL)
		{
			new_el = new QueueNode;
			
			new_el->data = temp->data;
			new_el->link = NULL;
			back->link = new_el;
			back = new_el;
			
			temp = temp->link;
		}
	}
}

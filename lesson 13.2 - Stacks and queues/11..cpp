Stack::Stack(const Stack& a_stack)
{
	top = NULL;
	
	StackFramePtr next = a_stack.top;
	while(next != NULL)
	{
		push(next->data);
		next = next->link;
	}
}


Stack::Stack(const Stack& a_stack)
{
	if (a_stack.top == NULL)
		top = NULL;
	else
	{
		StackFramePtr temp = a_stack.top;//temp moves
		//through the nodes from top to bottom of
		//a_stack.
		StackFramePtr end;//Points to end of the new stack.
		end = new StackFrame;
		end->data = temp->data;
		top = end;
		//First node created and filled with data.
		//New nodes are now added AFTER this first node.
		temp = temp->link;
		while (temp != NULL)
		{
			end->link = new StackFrame;
			end = end->link;
			end->data = temp->data;
			temp = temp->link;
		}
		end->link = NULL;
	}
}

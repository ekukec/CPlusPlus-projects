#include <iostream>
using namespace std;



struct Node
{
	char value;
	Node* next;
};
typedef Node* NodePtr;

class Stack
{
	public:
		Stack();
		Stack(int size);
		void output();
		void insert(char value);
		void remove();
	private:
		NodePtr head;
		int max_size;
		int capacity;
};

class StackOverflowException
{
	public:
		StackOverflowException();
		StackOverflowException(int the_state);
		int state;
};

class StackEmptyException
{
	public:
		StackEmptyException();
		StackEmptyException(int the_state);
		int state;
};


int main()
{
	Stack s1(5);
	char entry;
	
	for(int i = 0; i < 5; i++)
	{
		cout << "Enter char " << i + 1 << ": ";
		cin >> entry;
		
		s1.insert(entry);
	}
	
	
	s1.insert(entry);
	
	s1.remove();
	s1.remove();
	s1.remove();
	s1.remove();
	s1.remove();
	s1.remove();
	

	return 0;
}


Stack::Stack() : head(NULL), max_size(15), capacity(0)
{
	
}

Stack::Stack(int size) : head(NULL), max_size(size), capacity(0)
{
	
}

void Stack::output()
{
	NodePtr temp = head;
	
	while(temp != NULL)
	{
		cout << temp->value << endl;
		temp = temp->next;
	}
}

void Stack::insert(char value)
{

	try
	{
		if(capacity == max_size)
			throw StackOverflowException(capacity);
			
		NodePtr temp = head;
	
		head = new Node;
		head->value = value;
		head->next = temp;
		capacity++;
	}
	catch(StackOverflowException e)
	{
		cout << "Stack is full" << endl;
	}
}

void Stack::remove()
{
	try
	{
		if(capacity == 0)
			throw StackEmptyException(capacity);
			
		NodePtr del = head;
		head = head->next;
		delete del;
		capacity--;
	}
	catch(StackEmptyException e)
	{
		cout << "Stack is empty" << endl;
	}
}

StackOverflowException::StackOverflowException() : state(0)
{
	
}

StackOverflowException::StackOverflowException(int the_state) : state(the_state)
{
	
}

StackEmptyException::StackEmptyException() : state(0)
{
	
}

StackEmptyException::StackEmptyException(int the_state) : state(the_state)
{
	
}

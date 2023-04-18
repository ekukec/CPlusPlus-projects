#include <iostream>

using namespace std;

class CounterType
{
	public:
		int increase_counter();
		
		int decrease_counter();
		
		int current_counter();
		
		void output_counter(ostream &out);
		
		CounterType(int counter);
		
		CounterType();
	
	private:
		unsigned int counter;
};


int main()
{
	CounterType count1(5);
	
	count1.output_counter(cout);
	count1.increase_counter();
	count1.output_counter(cout);
	count1.decrease_counter();
	count1.output_counter(cout);
	
	CounterType count2;
	
	for(int i = 0; i < 24; i++)
	{
		count2.increase_counter();
		count2.output_counter(cout);
	}
	
	
	return 0;
}

int CounterType::increase_counter()
{
	counter++;
}

int CounterType::decrease_counter()
{
	if(counter > 0)
	{
		counter--;
	}
}

int CounterType::current_counter()
{
	return counter;
}

void CounterType::output_counter(ostream &out)
{
	out << "Counter value is: " << counter << endl;
}

CounterType::CounterType(int counter_v) : counter(counter_v)
{
	
}

CounterType::CounterType() : counter(0)
{
	
}


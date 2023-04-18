#include <iostream>
#include <cstdlib>

using namespace std;

class PartFilledArray
{
	public:
		PartFilledArray(int array_size);
		PartFilledArray(const PartFilledArray& object);
		~PartFilledArray();
		void operator =(const PartFilledArray& right_side);
		void add_value(double new_entry);
		void output();
		//There would probably be more member functions
		//but they are irrelevant to this exercise.
	protected:
		double *a;
		int max_number;
		int number_used;
};

class PartFilledArrayWMax : public PartFilledArray
{
	public:
		PartFilledArrayWMax(int array_size);
		PartFilledArrayWMax(const PartFilledArrayWMax& object);
		~PartFilledArrayWMax();
		void operator =(const PartFilledArrayWMax& right_side);
		double get_max();
		void add_value(double new_entry);
		
	private:
		double max_value;
};


int main()
{
	PartFilledArrayWMax arr1(6);
	
	arr1.add_value(1.1);
	arr1.add_value(3.1);
	arr1.add_value(4.1);
	arr1.add_value(2.1);
	arr1.add_value(7.1);
	//arr1.add_value(8.1);
	
	arr1.output();
	
	cout << "Max: " << arr1.get_max() << endl;
	
	PartFilledArrayWMax arr2(arr1), arr3(1);
	
	arr2.add_value(8.1);
	
	arr2.output();
	
	arr3 = arr2;
	
	arr3.output();
	
	return 0;
}



PartFilledArray::PartFilledArray(int array_size) : max_number(array_size), number_used(0)
{
	a = new double[max_number];
}

void PartFilledArray::add_value(double new_entry)
{
	if(number_used != max_number)
	{
		a[number_used] = new_entry;
		number_used++;
	}
	else
	{
		cout << "array full" << endl;
		exit(1);
	}
}

PartFilledArray::PartFilledArray(const PartFilledArray& object) : max_number(object.max_number), number_used(0)
{
	a = new double[object.max_number];
	
	for(; number_used < object.number_used; number_used++)
	{
		a[number_used] = object.a[number_used];
	}
}

void PartFilledArray::operator =(const PartFilledArray& right_side)
{
	if(right_side.max_number > max_number)
	{
		delete [] a;
		max_number = right_side.max_number;
		a = new double[max_number];
	}

	number_used = 0;
	for(; number_used < right_side.number_used; number_used++)
	{
		a[number_used] = right_side.a[number_used];
	}
}

PartFilledArray::~PartFilledArray()
{
	delete [] a;
}

void PartFilledArray::output()
{
	for(int i = 0; i < number_used; i++)
	{
		cout << i + 1 << ": " << a[i] << endl;
	}
}

double PartFilledArrayWMax::get_max()
{
	return max_value;
}

void PartFilledArrayWMax::add_value(double new_entry)
{
	if(number_used != max_number)
	{
		if(number_used == 0 || new_entry > max_value)
		{
			max_value = new_entry;
		}
		a[number_used] = new_entry;
		number_used++;
	}
	else
	{
		cout << "array full" << endl;
		exit(1);
	}
}

PartFilledArrayWMax::PartFilledArrayWMax(int array_size) : PartFilledArray(array_size)
{
	
}

PartFilledArrayWMax::PartFilledArrayWMax(const PartFilledArrayWMax& object) : PartFilledArray(object)
{
	if(object.number_used > 0)
	{
		//max_value = object.max_value;
		
		max_value = a[0];
		for(int i = 0; i < number_used; i++)
		{
			if(max_value < a[i])
			{
				max_value = a[i];
			}
		}
	}
}

PartFilledArrayWMax::~PartFilledArrayWMax()
{
	
}

void PartFilledArrayWMax::operator =(const PartFilledArrayWMax& right_side)
{
	PartFilledArray::operator =(right_side);
	max_value = right_side.max_value;
}

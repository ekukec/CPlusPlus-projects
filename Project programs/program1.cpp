#include <iostream>
#include <cstdlib>

using namespace std;


class VectorDouble
{
	public:
		VectorDouble();
		VectorDouble(int elements);
		VectorDouble(const VectorDouble& parameter1);
		~VectorDouble();
		
		void operator =(const VectorDouble& parameter1);
		
		friend bool operator ==(const VectorDouble& parameter1, const VectorDouble& parameter2);
		
		void push_back(double value);
		int capacity();
		int size();
		void reserve(int elements);
		void resize(int elements);
		
		double value_at(int i);
		
		void change_value_at(int i, double value);
		
		
	private:
		void copy(const VectorDouble& parameter1);
		void copy(double array[], int size, int mode);
		int count;
		int max_count;
		double *arr;
};


int main()
{
	VectorDouble p1;
	double rad;
	
	for(int i = 0; i < 50; i++)
	{
		rad = rand() % 100;
		p1.push_back(rad);
		cout << "Value " << i + 1 << ": " << p1.value_at(i) << endl;
	}
	
	cout << "Cap " << p1.capacity() << endl; 
	
	p1.push_back(69.69);
	
	cout << "Cap " << p1.capacity() << endl; 
	cout << p1.size() << endl;
	
	cout << p1.value_at(50) << endl;
	
	p1.resize(30);
	
	for(int i = 0; i < p1.capacity(); i++)
	{
		cout << "Value " << i + 1 << ": " << p1.value_at(i) << endl;
	}
	
	cout << "Cap " << p1.capacity() << endl; 
	cout << p1.size() << endl;
	
	return 0;
}

VectorDouble::VectorDouble()
{
	arr = new double[50];
	max_count = 50;
	count = 0;
}

VectorDouble::VectorDouble(int elements)
{
	arr = new double[elements];
	max_count = elements;
	count = 0;
}

VectorDouble::VectorDouble(const VectorDouble& parameter1)
{
	arr = new double[parameter1.max_count];
	max_count = parameter1.max_count;
	copy(parameter1);
	count = parameter1.count;
}

VectorDouble::~VectorDouble()
{
	delete [] arr;
}

void VectorDouble::operator =(const VectorDouble& parameter1)
{
	arr = new double[parameter1.max_count];
	max_count = parameter1.max_count;
	copy(parameter1);
	count = parameter1.count;
}

bool operator ==(const VectorDouble& parameter1, const VectorDouble& parameter2)
{
	bool same = true;
	if(parameter1.count == parameter2.count)
	{
		for(int i = 0; i < parameter1.count; i++)
		{
			if(parameter1.arr[i] != parameter2.arr[i])
			{
				same = false;
			}
		}
		return same;
	}
	else
	{
		return false;
	}
}

void VectorDouble::copy(const VectorDouble& parameter1)
{
	for(int i = 0; i < parameter1.count; i++)
	{
		arr[i] = parameter1.arr[i];
	}
}

void VectorDouble::copy(double array[], int size, int mode)
{
	if(mode == 0)
	{
		for(int i = 0; i < size; i++)
		{
			array[i] = arr[i];
		}
	}
	else
	{
		for(int i = 0; i < size; i++)
		{
			arr[i] = array[i];
		}
	}
}

void VectorDouble::push_back(double value)
{
	if(count == max_count)
	{
		double *temp, clone[max_count];
		
		copy(clone, max_count, 0);
		
		temp = arr;
		delete temp;
		
		arr = new double[max_count * 2];
		
		copy(clone, max_count, 1);
		max_count = max_count * 2;
		
		arr[count] = value;
		count++;
	}
	else
	{
		arr[count] = value;
		count++;
	}
}

int VectorDouble::capacity()
{
	return max_count;
}

int VectorDouble::size()
{
	return count;
}

void VectorDouble::reserve(int elements)
{
	if(elements > max_count)
	{
		double *temp, clone[max_count];
		
		copy(clone, max_count, 0);
		
		temp = arr;
		delete temp;
		
		arr = new double[elements];
		
		copy(clone, max_count, 1);
		max_count = elements;
	}
}

void VectorDouble::resize(int elements)
{
	if(elements > max_count)
	{
		double *temp, clone[max_count];
		
		copy(clone, max_count, 0);
		
		temp = arr;
		delete temp;
		
		arr = new double[elements];
		
		copy(clone, max_count, 1);
		max_count = elements;
	}
	else if(elements < max_count)
	{
		double *temp, clone[elements];
		
		copy(clone, elements, 0);
		
		temp = arr;
		delete temp;
		
		arr = new double[elements];
		
		copy(clone, elements, 1);
		max_count = elements;
		count = elements - 1;
	}
}

double VectorDouble::value_at(int i)
{
	if(i > count || i < 0)
	{
		cout << "Invalid paramater entered" << endl;
	}
	else
	{
		return arr[i];
	}
}

void VectorDouble::change_value_at(int i, double value)
{
	if(i >= count || i < 0)
	{
		cout << "Invalid paramater entered" << endl;
	}
	else
	{
		arr[i] = value;
	}
}

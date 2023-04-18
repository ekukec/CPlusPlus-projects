#include <iostream>
using namespace std;


template<class T1, class T2>
class HetPair
{
	public:
		HetPair();
		HetPair(T1 the_first, T2 the_second);
		void set_first(T1 value);
		void set_second(T2 value);
		T1 get_first();
		T2 get_second();
		
	private:
		T1 first;
		T2 second;
};


int main()
{
	HetPair<bool, char> test(true,'E');
	
	cout << test.get_first() << endl << test.get_second() << endl;
	
	return 0;
}

template<class T1, class T2>
HetPair<T1,T2>::HetPair()
{
	
}

template<class T1, class T2>
HetPair<T1,T2>::HetPair(T1 the_first, T2 the_second) : first(the_first), second(the_second)
{
	
}

template<class T1, class T2>
void HetPair<T1,T2>::set_first(T1 value)
{
	first = value;
}

template<class T1, class T2>
void HetPair<T1,T2>::set_second(T2 value)
{
	second = value;
}

template<class T1, class T2>
T1 HetPair<T1,T2>::get_first()
{
	return first;
}

template<class T1, class T2>
T2 HetPair<T1,T2>::get_second()
{
	return second;
}

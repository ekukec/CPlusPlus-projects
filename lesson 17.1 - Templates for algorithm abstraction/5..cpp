#include <iostream>
using namespace std;

template<class T>
int search(const T a[], int number_used, T target)
{
	int index = 0;
	bool found = false;
	
	while ((!found) && (index < number_used))
	{
		if (target == a[index])
			found = true;
		else
			index++;
	}
	
	if (found)
		return index;
	else
		return -1;
}


int main()
{
	char word[] = {"Fuck me"};
	
	cout << search(word, 6, 'm');
	

	
	
	return 0;
}

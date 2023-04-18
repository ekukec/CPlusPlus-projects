#include <iostream>
using namespace std;


void reverse(char arr[], int first, int last);

void rev_all(char arr[]);


int main()
{
	char test[] = {"ABCDE"};
	char test2[] = {"ABCDEfghijk"};
	
	cout << test << endl;
	
	reverse(test, 1, 4);
	
	cout << test << endl;
	
	rev_all(test2);
	
	cout << test2 << endl;
	
	return 0;
}


void reverse(char arr[], int first, int last)
{
	if(first > last)
	{
		
	}
	else if(first == last)
	{
		
	}
	else
	{
		char temp = arr[first];
		arr[first] = arr[last];
		arr[last] = temp;
		reverse(arr, first + 1, last - 1);
	}
}

void rev_all(char arr[])
{
	int i = 0;
	
	while(arr[i] != '\0')
	{
		i++;
	}
	
	reverse(arr, 0, i - 1);
}

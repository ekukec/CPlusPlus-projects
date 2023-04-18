#include <iostream>
#include <cstring>

using namespace std;

bool isPalindrome(char *cstr);


int main()
{
	char s1[50] = "neveroddoreven";
	char s2[50] = "not a palindrome";
	char s3[50] = "palindromemordnilap";
	
	
	cout << isPalindrome(s1) << endl; // true
	cout << isPalindrome(s2) << endl; // false
	cout << isPalindrome(s3) << endl;
	
	return 0;
}

bool isPalindrome(char *cstr)
{
	char *front = cstr;
	char *back = cstr + strlen(cstr)-1;
	
	while (front < back)
	{
		if(*front != *back)
		{
			return false;
		}
		front = front + 1;
		back = back - 1;
	}
	return true;
}

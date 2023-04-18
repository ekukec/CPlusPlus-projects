#include <iostream>
#include <string>
#include <vector>
#include "stringset.h"
using namespace std;
using namespace kukec;

int main()
{
	string par[3] = {"yo ", " whas ", " poppin"}, bar[4] = {"yo ", " notin", " be ", " poppin"};
	
	StringSet s1(par, sizeof(par)/sizeof(par[0])), s2(bar, sizeof(bar)/sizeof(bar[0])), s3, s4;
	
	s3 = s1 + s2;
	
	s3.output();
	
	cout << endl;
	
	s4 = s1 * s2;
	
	s4.output();
	
	cout << endl;
	
	return 0;
}

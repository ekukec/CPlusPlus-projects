#include <iostream>
#include "pairs.h"
using namespace std;

Pairs operator +(const Pairs& p1, const Pairs& p2)
{
	Pairs temp;
	temp.f = p1.f + p2.f;
	temp.s = p1.s + p2.s;
	return temp;
}

Pairs operator -(const Pairs& p1, const Pairs& p2)
{
	Pairs temp;
	temp.f = p1.f - p2.f;
	temp.s = p1.s - p2.s;
	return temp;
}

Pairs operator *(const Pairs& p1, int p2)
{
	Pairs temp;
	temp.f = p1.f * p2;
	temp.s = p1.s * p2;
	return temp;
}

Pairs::Pairs() : f(0), s(0)
{
	
}

Pairs::Pairs(int first, int second) : f(first), s(second)
{
	
}

istream& operator >>(istream& ins, Pairs& second)
{
	//cout << "(";
	cout << "First: ";
	ins >> second.f;
	//cout << ",";
	cout << "Second: ";
	ins >> second.s;
	//cout << ")";
	
	return ins;
}

ostream& operator <<(ostream& outs, const Pairs& second)
{
	outs << "(" << second.f << "," << second.s << ")"; 
	
	return outs;
}

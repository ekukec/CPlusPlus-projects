#include <iostream>
using namespace std;
class Pairs
{
	public:
		friend Pairs operator +(const Pairs& p1, const Pairs& p2);
		friend Pairs operator -(const Pairs& p1, const Pairs& p2);
		friend Pairs operator *(const Pairs& p1, int p2);
		Pairs( );
		Pairs(int first, int second);
		//other members and friends
		friend istream& operator >>(istream& ins, Pairs& second);
		friend ostream& operator <<(ostream& outs, const Pairs& second);
		
		
		
	private:
		int f;
		int s;
};


int main()
{
	Pairs p1, p2(2, 3), p3(4, -5), p4(-1, -11), p5;
	
	/*
	cin >> p1;
	cout << p1 << endl;
	
	cout << p2 << endl;
	*/
	
	p5 = p3 - p4;
	
	p1 = p2 * 3;
	
	cout << p5 << endl;
	
	cout << p1 << endl;
	
	return 0;
}

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

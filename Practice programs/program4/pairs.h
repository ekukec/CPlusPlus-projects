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

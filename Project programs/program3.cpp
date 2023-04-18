#include <iostream>

using namespace std;


class Complex
{
	public:
		Complex(double real_p, double imaginary_p);
		Complex(double real_p);
		Complex();
		
		friend bool operator ==(const Complex& par1, const Complex& par2);
		
		friend Complex operator +(const Complex& par1, const Complex& par2);
		
		friend Complex operator -(const Complex& par1, const Complex& par2);
		
		friend Complex operator *(const Complex& par1, const Complex& par2);
		
		friend istream& operator >>(istream& in, Complex& par1);
		
		friend ostream& operator <<(ostream& out, const Complex& par1);
		
	private:
		double real;
		double imaginary;
};


int main()
{
	Complex num1(21.2,4), num2(3,1);
	
	cout << num2 << endl << num1 << endl;
	
	cout << num1 + num2 << endl;
	
	cout << num1 - num2 << endl;
	
	cout << num1 * num2 << endl;
	
	
	return 0;
}

Complex::Complex(double real_p, double imaginary_p) : real(real_p), imaginary(imaginary_p)
{
	
}

Complex::Complex(double real_p) : real(real_p), imaginary(0)
{
	
}

Complex::Complex() : real(0), imaginary(0)
{
	
}

bool operator ==(const Complex& par1, const Complex& par2)
{
	return((par1.real == par2.real) && (par1.imaginary == par2.imaginary));
}

Complex operator +(const Complex& par1, const Complex& par2)
{
	Complex result;
	result.real = par1.real + par2.real;
	result.imaginary = par1.imaginary + par2.imaginary;
	return result;
}

Complex operator -(const Complex& par1, const Complex& par2)
{
	Complex result;
	result.real = par1.real - par2.real;
	result.imaginary = par1.imaginary - par2.imaginary;
	return result;
}

Complex operator *(const Complex& par1, const Complex& par2)
{
	Complex result;
	result.real = (par1.real * par2.real) - (par1.imaginary * par2.imaginary);
	result.imaginary = (par1.real * par2.imaginary) + (par1.imaginary * par2.real);
	return result;
}

istream& operator >>(istream& in, Complex& par1)
{
	char plus, mul, i;
	in >> par1.real >> plus >> par1.imaginary >> mul >> i;
	return in;
}

ostream& operator <<(ostream& out, const Complex& par1)
{
	out << par1.real << "+" << par1.imaginary << "*i" << endl;
}

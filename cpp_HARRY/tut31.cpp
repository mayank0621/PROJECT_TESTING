#include<iostream>
using namespace std;


class Complex{
int a, b;
public:

	Complex(int x, int y)
	{
	a=x;
	b=y;
	}
	
	Complex(int x)
	{
	a=0;
	}
	
	Complex ()
	{
	a=0;
	b=0;
	}
	
	
	void printNumber()
	{
	cout<<"Complex nuymber is ("<<a<< " + " <<b<< "i)" <<endl;
	}
	
	void printoneNumber()
	{
	cout<<"Number is "<<a<<endl;
	}
	
	};
	
int main()
{
Complex c3;
Complex c(3,5);
Complex c2(5);
c.printNumber();

//Complex c2(3);
c2.printoneNumber();
c3.printoneNumber();
return 0;
}

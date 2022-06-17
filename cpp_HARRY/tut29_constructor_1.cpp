#include<iostream>
using namespace std;

class Complex{
	int a, b;

	public:

	Comp(void);
	void printNumber()
{
	cout << "Your number is "<< a << " + " << b << "i" <<endl;
}
	

};

Complex :: Comp(void){
	a=10;
	b=0;
}


int main()
{
	Complex c;
	c.printNumber();
	
	return 0;
}

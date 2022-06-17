#include<iostream>
using namespace std;

class Base1{
	public:
		void greet(){
			cout<<"How are you?"<<endl;
		}
	};
	
	
class Base2{
	public:
		void greet(){
			cout<<"Kaise ho?"<<endl;
		}
	};
	
class Derived : public Base1, public Base2{
	int a;
	public:
		void greet(){
		Base1 :: greet();  /*WE are using this statement because when we call greet() function from derived class so the derived class will get confuse bcz greet() function is present in Base1 as well as in Base2. Due to this we are using Base1 :: greet(); or we can use  Base2 :: greet(); */
	}
};
	
int main(){
	Base1 base1obj;
	Base2 base2obj;
	base1obj.greet();
	base2obj.greet();
	Derived d;
	d.greet();  //we are calling greet() function here from the object of Derived class.
	return 0;
}
	



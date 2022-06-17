#include<iostream>
using namespace std;

//Base class
class Employee{
	public:
	int id;
	float salary;
		Employee(int inpId){
		id = inpId;
		salary = 34.0;
		}
		Employee(){} //Default constructor should make
	};
	
	
	//Derived class syntax
	/*
	class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
	{
	class members/methods/etc......
	}
	*/
	
	//Creating a Programmer class derived from Employee Base class
	
	class Programmer : Employee{ //Here by default visiblity mode is private
		public:
		Programmer(int inpId){
			id = inpId;
			}
		int languageCode = 9;
		void getData(){
			cout<<id<<endl;
			}
		};
		 
	
	int main(){
	Employee harry(1), rohan(2);
	cout<<harry.salary<<endl;
	cout<<rohan.salary<<endl;
	
	Programmer skillF(1);
	cout<<skillF.languageCode<<endl;
	skillF.getData();
	
	//cout<<skillF.languageCode<<endl;  
	
	//NOTE-if we uncomment above line then it will through error. But in visiblity mode (line no 27) we make it as public then no error will come
	return 0;
	}
	
	
	

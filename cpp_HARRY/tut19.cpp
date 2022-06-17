#include<iostream>
using namespace std;

int add(int a, int b)
{

cout<<"Using function with 2 arguments"<<endl;
	return a+b;
}

int add(int a, int b, int c)
{

cout<<"Using function with 3 arguments"<<endl;
	return a+b+c;
}

//calculate the volume of a cylinder

int volume( double r, int h)
{
return (3.14*r*r*h);
}

//calculate the volume of a cube

int volume(int a)
{
return a*a*a;
}

//Rectangular box

int volume(int l, int b, int h)
{
return (l*b*h);
}



int main()
{

	//int x=1,y=2,z=3;
	cout<<add(2,4)<<endl;

	cout<<add(2,3,5);
	
	
	cout<<"The volume of cuboid of 3, 7 and 6 is "<<volume(3, 7, 6)<<endl;
	
	cout<<volume(3, 6)<<endl;
	
	cout<<volume(8)<<endl;

	return 0;
}


#include<iostream>
using namespace std;

class A{
	protected:
		int roll;
		char name;
	public:
		void setData();
		void getData();
		
		};
		
	void A :: setData(void)
	{
	int roll=1807283;
	char name= 'm';
	}
	
	
	class B : protected A{
	public:
		int x;
		int y;
		
	
	
	int main()
	{
	
	return 0;
	}

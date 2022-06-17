#include<iostream>
using namespace std;


class Employee
{
    int id;
    static int count;
    
    public:
    	void setData(void)
    {
    	cout<<"Enter the id"<<endl;
    	cin>>id;
    	count++;
    }
    	
    	void getData(void)
    {
    	cout<<"The id of this employee is " << id <<" and this is employee number"<<count<<endl;
    }
    
    	static void getCount(void)
    	{
    		cout<<"The value of count is "<<count<<endl;
    	}
    
}; 


int Employee :: count; //Default value of count  is 0. Because it is 				static int


int main()
{

Employee harry,mayank,mukesh;

harry.setData();
harry.getData();
Employee :: getCount();

mayank.setData();
mayank.setData();
Employee :: getCount();

mukesh.setData();
mukesh.setData();
Employee :: getCount();

return 0;
}

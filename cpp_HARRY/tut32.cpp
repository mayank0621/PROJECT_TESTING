#include<iostream>
using namespace std;

class simple{

int data1;
int data2, data3;

public:

 simple(int a, int b=8, int c=0)
 {
 data1=a;
 data2=b;
 data3=c;
}

void printdata();
//{
//cout<<"Value is "<<data1 <<" , "<<data2<<endl;
//}
};

void simple :: printdata()
{
cout<<"Value is "<<data1 <<" , "<<data2<<" , "<<data3<<endl;
}

int main()
{
//simple c;
simple c(5,7,8);
c.printdata();

return 0;
}


#include <iostream>

using namespace std;

class Base
{
    int data1; // private by default and is not inheritable
public:
    int data2;
    void setData();
    int getData1();
    int getData2();
};

void Base ::setData(void)
{
    data1 = 10;
    data2 = 20;
}

int Base::getData1()
{
    return data1;
}

int Base::getData2()
{
    return data2;
}

class Derived : private Base
{ // Class is being derived publically
    int data3;

public:
    void process();
    void display();
};

void Derived ::process()
{
    setData();    // We are calling this function here because setData() is now private function.
    data3 = data2 * getData1();
}

void Derived ::display()
{
    cout << "Value of data 1 is " << getData1() << endl;
    cout << "Value of data 2 is " << data2 << endl;
    cout << "Value of data 3 is " << data3 << endl;
}

int main()
{
    Derived der;
    //der.setData();  //We can't call this function directely because now visiblity mode is private due to this we will call this function inside process() function because process is public function. 
    der.process();
    der.display();

    return 0;
}


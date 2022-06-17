#include<iostream>
using namespace std;

class Point{

int a, b;
public:
 Point(int x, int y){
a=x;
b=y;

}

void Displaypoint(){
	cout<<"The point is ("<< a <<" , " << b <<")"<<endl;
	}
};


int main()
{
Point p(6,7);

p.Displaypoint();

return 0;
}



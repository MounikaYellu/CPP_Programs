#include<iostream>
using namespace std;
class Rectangle
{
float len,breadth,area,perimeter;
public:void calarea()
	{
	area=len*breadth;
	}
void calperi()
{
	perimeter = 2 * (len+breadth) ;
}
void display()
{
	cout<<"len:"<<len<<endl;
	cout<<"breadth:"<<breadth<<endl;
	cout<<"area:"<<area<<endl;
	cout<<"perimeter:"<<perimeter<<endl;
}
void getdata()
{
	cout<<"Enter length and breadth of a rectangle"<<endl;
	cin>>len;
	cin>>breadth;
}
};
int main()
{
Rectangle obj;
obj.getdata();
obj.calarea();
obj.calperi();
obj.display();
return 0;
}

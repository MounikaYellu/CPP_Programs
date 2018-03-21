#include<iostream>
using namespace std;
class XYZ
{
int x,y;
public:
XYZ()
{
	cout<<" Enter the values of x & y"<<endl;
	cin>>x>>y;
}
void display() const
{
	cout<<"x:"<<x<<endl<<"y:"<<y<<endl;
}
void getdata()
{
	x=90;
	y=80;
}
};
main()
{
	const XYZ obj1;
	obj1.display();
	XYZ obj2;
	obj2.display();
	// obj1.getdata(); Const object can only invoke const member functions
	obj2.getdata(); 	
	obj2.display();
}

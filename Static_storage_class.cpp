#include<iostream>
using namespace std;
class ABC
{
int x,y;
static int z;
public:
ABC()
{
	cout<<" Enter the x and y : "<<endl;
	cin>>x>>y;
	z++;
}
ABC(int a,int b)
{
	x=a;
	y=b;
	z++;
}
void display()
{
	cout<<"x: "<<x<<endl;
	cout<<"y: "<<y<<endl;
	// cout<<"z: "<<z<<endl;
}
static void count()
{
	cout<<"z: "<<z<<endl;
}
~ABC()
{
	cout<<"destructor:"<<endl;
}
};
int ABC::z;
main()
{
ABC obj1;
cout<<" Details of obj1:"<<endl;
obj1.display();
ABC obj2(10,20);
cout<<" Details of obj2:"<<endl;
obj2.display();
ABC::count();
obj2.count();
}


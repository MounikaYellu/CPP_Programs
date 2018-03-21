#include<iostream>
using namespace std;
class ABC
{
int x;
const int y;
public:
ABC():y(10)
{
	cout<<"Enter the x :"<<endl;
	cin>>x;
}
ABC(int a, int b):y(b)
{
	x=a;
}
void display() const
{
	cout<<x<<endl;
	cout<<y<<endl;
}
};
main()
{
	ABC obj;
	obj.display();
	int a,b;
	cout<<" Enter a & b"<<endl;
	cin>>a>>b;
	ABC obj1(a,b);
	obj1.display();
}


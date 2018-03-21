#include<iostream>
using namespace std;
int x=10;
main()
{
int x=90;
{
	int x=23;
	cout<<"x:"<<x<<endl;
	cout<<"::x :"<<::x<<endl;
}
cout<<"x:"<<x<<endl;
cout<<"::x :"<<::x<<endl;
}

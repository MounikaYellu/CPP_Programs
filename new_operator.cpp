#include<iostream>
using namespace std;
main()
{
{
	int *ptr;
	ptr=new int;
	cout<<"enter an integer:"<<endl;
	cin>>*ptr;
	cout<<"*ptr:"<<*ptr<<endl;
	delete ptr;
	ptr=NULL;
}
{
	float *ptr;
	ptr=new float(45.9);
	cout<<"*ptr:"<<*ptr<<endl;
	delete ptr;
	ptr=NULL;
}
int *ptr;
ptr=new int[5];
cout<<"Enter 5 integer values :"<<endl;
for(int i=0;i<5;i++)
	cin>>ptr[i];
for(int i=0;i<5;i++)
	cout<<ptr[i]<<"  ";
cout<<endl;
delete []ptr;
ptr=NULL;

}


#include<iostream>
using namespace std;
main()
{
int x=90;
int &ref=x;
cout<<"x:"<<x<<endl<<"ref:"<<ref<<endl;
x=67;
cout<<"x:"<<x<<endl<<"ref:"<<ref<<endl;
cout<<"x"<<x<<" is at :"<<&x<<endl<<"ref"<<ref<<" is at :"<<&ref<<endl;
int y=23;
ref=y;
cout<< "x:"<<x<<endl<<"ref:"<<ref<<endl;
cout<<"y:"<<y<<endl;
int &ref1=x;
int *ptr;
int *&q=ptr;
ptr=&x;
cout<<"ptr:"<<ptr<<endl;
cout<<"q:"<<q<<endl;
cout<<"*ptr:"<<*ptr<<endl<<"*q:"<<*q<<endl;
q=&y;
cout<<"*ptr:"<<*ptr<<endl<<"*q:"<<*q<<endl;
int &z=*q;
cout<<"&y:"<<&y<<endl<<"&z:"<<&z<<endl;
}

#include<iostream>
using namespace std ;
void Swap(int &a,int &b)
{
int temp;
cout<<"Integer Swap Function:"<<endl;
temp=a;
a=b;
b=temp;
}
void Swap(char &a,char &b)
{
char temp;
cout<<"Char Swap Function :"<<endl;
temp=a;
a=b;
b=temp;
}
void Swap(float &a,float &b)
{
float temp;
cout<<"Float Swap Function:"<<endl;
temp=a;
a=b;
b=temp;
}
main()
{
int num1,num2;
cout<<"Enter the num1 and num2 :"<<endl;
cin>>num1>>num2;
cout<<"Before Swap num1:"<<num1<<"num2:"<<num2<<endl;
Swap(num1,num2);
cout<<"After Swap num1:"<<num1<<"num2:"<<num2<<endl;

char ch1,ch2;
cout<<"Enter two characters :"<<endl;
cin>>ch1>>ch2;
cout<<"Before Swap ch1:"<<ch1<<"ch2:"<<ch2<<endl;
Swap(ch1,ch2);
cout<<"After Swap ch1:"<<ch1<<"ch2:"<<ch2<<endl;

float f1,f2;
cout<<"Enter two real numbers :"<<endl;
cin>>f1>>f2;
cout<<"Before Swap f1:"<<f1<<"f2:"<<f2<<endl;
Swap(f1,f2);
cout<<"After Swap f1:"<<f1<<"f2:"<<f2<<endl;
}

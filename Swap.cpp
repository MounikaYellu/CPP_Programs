#include<iostream>
using namespace std;
void swap_val(int,int);
void swap_addr(int*,int*);
void swap_ref(int &,int &);
main()
{
int num1,num2;
cout<<"Enter the num1 ,num2:"<<endl;
cin>>num1>>num2;
cout<<"before:\n";
cout<<"num1:"<<num1<<endl;
cout<<"num2:"<<num2<<endl;
//swap_val(num1,num2);
//swap_addr(&num1,&num2);
swap_ref(num1,num2);
cout<<"After swap_val:"<<endl;
cout<<"num1:"<<num1<<endl;
cout<<"num2:"<<num2<<endl;
}
void swap_val(int n1,int n2)
{
int temp;
temp=n1;n1=n2;n2=temp;
}
void swap_addr(int *n1,int *n2)
{
int temp;
temp=*n1;*n1=*n2;*n2=temp;
}
void swap_ref(int &n1,int &n2)
{
int temp;
temp=n1;n1=n2;n2=temp;
}


#include<iostream>
#include<iomanip>
using namespace std;
int x=90;
main()
{
int x=23;
cout<<"x:"<<x<<endl;
cout<<setw(5);
cout<<right;
cout<<"x:"<<x<<endl;
cout<<"::x :"<<::x<<endl;
float f= 34.34567;
cout<<"setting precision : "<<setprecision(5)<<endl;
cout<<f;

}


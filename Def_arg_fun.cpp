#include<iostream>
using namespace std;
int sum(int,int,int,int=0,int=0);
main()
{
int res;
res=sum(10,20,30);
cout<<"sum:"<<res<<endl;
res=sum(10,20,30,40);
cout<<"sum:"<<res<<endl;
}
int sum(int a, int b,int c, int d, int e)
{
return a+b+c+d+e;
}

#include<iostream>
using namespace std;
class Complex
{
int real,img;
public:
// Default constructor
Complex()
{
	cout<<"Enter real and imaginary values:"<<endl;
	cin>>real>>img;
}
//Parameterised constructor
Complex(int r,int i)
{
	cout<<"In parameterised constructor:"<<endl;
	real=r;
	img=i;
}
//Copy constructor
Complex(Complex &eq)
{
	real=eq.real;
	img=eq.img;
	cout<<" In copy constructor:"<<endl;
}
void display()
{
	cout<<real;
	if(img>0) cout<<"+";
	cout<<img<<"i"<<endl;
}
~Complex()
{
cout<<"In Destructor :"<<endl;
}
};
main()
{
Complex eq1;
cout<<" Details of eq1 "<<endl;
eq1.display();
Complex eq2(10,-45);
cout<<" Details of eq2 "<<endl;
eq2.display();
Complex eq3=eq1;
cout<<" Details of eq3 "<<endl;
eq3.display();
}

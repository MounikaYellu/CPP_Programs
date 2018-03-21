#include<iostream>
using namespace std;
class Bank
{
int accno;
char name[10];
float bal;
public:void deposit(float amt)
	{
	bal+=amt;
	}
void withdrawl(float amt)
{
	if(amt<bal)
		bal-=amt;
	else
		cout<<"insufficient funds:"<<endl;
}
void balenq()
{
	cout<<"Balance available in your account:";
	cout<<bal<<endl;
}
void getdata()
{
	cout<<"Enter the account number :"<<endl;
	cin>>accno;
	cout<<"Enter the name:"<<endl;
	cin>>name;
	cout<<"Enter the balance :"<<endl;
	cin>>bal;
}
void display()
{
	cout<<"name:"<<name<<endl;
	cout<<"accno:"<<accno<<endl;
	cout<<"bal:"<<bal<<endl;
}
};
int main()
{
Bank myacc;
myacc.getdata();
cout<<"Details of myacc:"<<endl;
myacc.display();
Bank facc;
facc.getdata();
cout<<"Details of facc:"<<endl;
facc.display();
float amt;
cout<<"enter the amount to be deposited :"<<endl;
cin>>amt;
myacc.deposit(amt);
myacc.balenq();
Bank *ptr;
ptr=&facc;
ptr->balenq();
return 0;
}

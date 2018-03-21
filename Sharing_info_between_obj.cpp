#include<iostream>
using namespace std;
class SBI
{
int accno;
char name[15];
float bal;
public:
SBI()
{
	cout<<" Enter the account number \n";
	cin>>accno;
	cout<<" Enter the name \n";
	cin>>name;
	cout<<" Enter the Amount: \n";
	cin>>bal;
}
void balenq()
{
	cout<<" balance available in your account : ";
	cout<<bal<<endl;
}
void deposit(float amt)
{
	bal+=amt;
	balenq();
}
int withdrawal(float amt)
{
	if(amt<bal)
	{
		bal-=amt;
		return 1;
	}
	else
		cout<<" Insufficient funds: "<<endl;
	return 0;
}
void transfer(SBI &myacc)
{
	float amt;
	cout<<" Enter amount to transfer :"<<endl;
	cin>>amt;
	if(withdrawal(amt))
	myacc.deposit(amt);
	balenq();
}
int menu(SBI myacc)
{
	int choice ;
	float amt;
	while(1)
	{
		cout<<" 1.Deposit 2.Withdraw 3.Balenq 4.Transfer 5.Exit "<<endl;
		cout<<" Enter your choice: "<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1: deposit(amt);break;
			case 2: withdrawal(amt);break;
			case 3: balenq(); break;
			case 4: transfer(myacc);break;
			case 5: return 0;
			default: cout<< " Invalid choice "<<endl;
		}
	}
}
};
main()
{
	SBI facc,myacc;
	facc.menu(myacc);
}
	


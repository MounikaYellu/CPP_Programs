#include<iostream>
using namespace std;
class IntegerArray
{
int size;
int *ptr;
public:IntegerArray()
{
	size=0;
	cout<<" Enter the number of elements:"<<endl;
	cin>>size;
	ptr=new int[size];
	cout<<"Enter the elements:"<<endl;
	for(int i=0;i<size;i++)
		cin>>ptr[i];
}

private:void print()
	{
		for(int i=0;i<size;i++)
			cout<<ptr[i]<<" ";
		cout<<endl;
	}
void reverse()
{
	int temp;
	for(int i=0,j=size-1;i<j;i++,j--)
	{
		temp=ptr[i];
		ptr[i]=ptr[j];
		ptr[j]=temp;
	}
	cout<<"After reverse :"<<endl;
	print();
}
void sort()
{
	int temp,i,j;
	for(i=0;i<size;i++)
	{
		for(j=0;j<size-i-1;j++)
		{
			if(ptr[j]>ptr[j+1])
			{
				temp=ptr[j];
				ptr[j]=ptr[j+1];
				ptr[j+1]=temp;
			}
		}
	}
	cout<<"Elements after sort:"<<endl;
	print();
}
int search()
{
	int temp;
	cout<<" Enter an element to search:"<<endl;
	cin>>temp;
	for(int i=0;i<size;i++)
	{
		if(temp==ptr[i])
		return i;
	}
	return -1;
}
public:int menu()
{
int choice,ret;
while(1)
{
	cout<<" 1.print \n 2.reverse \n 3.sort \n 4.search \n 5.exit "<<endl;
	cout<<"Enter your choice"<<endl;
	cin>>choice;
	switch(choice)
	{
		case 1: if(size==0) cout<<"No elements to print:"<<endl;
			else print();
			break;
		case 2:reverse();break;
		case 3:sort();break;
		case 4:ret=search();
			if(ret==-1)
				cout<<"Element not found :"<<endl;
			else
				cout<<"Element found at:"<<ret			+1<<" position"<<endl;
			break;
		case 5:return 0;
		default:
			cout<<"invalid choice:"<<endl;
	}
}
}
~IntegerArray()
{
cout<<"Array is destroyed:"<<endl;
delete []ptr;
ptr=NULL;
}
};
main()
{
IntegerArray obj1;
IntegerArray *ptr;
ptr= new IntegerArray(obj1);
cout<<"obj1:"<<endl;
obj1.menu();
/*ptr= new IntegerArray;
ptr->menu();
delete ptr;
cout<<"Pointer is deleted :"<<endl;
ptr=NULL;
cout<<"Program completed"<<endl;*/
}

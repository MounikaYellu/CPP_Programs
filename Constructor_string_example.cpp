#include<iostream>
#include<cstring>
using namespace std;
class String
{
char *ptr;
int size;
public:
/*String()
{
	cout<<"Enter the size of the string (number of elements) :"<<endl;
	cin>>size;
	ptr=new char[size];
	cout<<"Enter the string:"<<endl;
	cin>>ptr;
}*/
String()
{
	ptr=NULL;
	size=0;
}
String(const char *p)
{
	size=strlen(p)+1;
	ptr=new char[size];
	strcpy(ptr,p);
}
String(String &obj1)
{
	size=obj1.size;
	ptr=new char[size];
	strcpy(ptr,obj1.ptr);
}
void display()
{
	cout<<ptr<<endl;
	cout<<size<<endl;
}
void modify(const char *p)
{
	size=strlen(p)+1;
	//ptr=new char[size];
	strcpy(ptr,p);
}
~String()
{
	cout<<"in destructor:"<<endl;
	//delete []ptr;
	//ptr=NULL;
}
};
main()
{
	//String obj;
	//obj.display();
	String obj1("Vector");
	cout<<"Details of obj1:"<<endl;
	obj1.display();
	cout<<"Address of obj1  "<<&obj1<<endl;
	String obj2=obj1;
	cout<<"Details of obj2:"<<endl;
	obj2.display();
	cout<<"Address of obj2  "<<&obj2<<endl;
	obj2.modify("Mounika");
	cout<<"Obj2 after modification"<<endl;
	obj2.display();
	cout<<"Address of obj2  "<<&obj2<<endl;
	cout<<"obj1:"<<endl;
	obj1.display();
	cout<<"Address of obj1  "<<&obj1<<endl;
}



// Dynamic memory allocation to a 2D array using new operator 
#include<iostream>
using namespace std;
main()
{
int **ptr=NULL;
int r,c,i,j;
cout<<"Enter number of rows and columns :"<<endl;
cin>>r>>c;
ptr=new int*[r];
for(i=0;i<r;i++)
{
	ptr[i]=new int[c];
	cout<<"enter the elements for "<<i+1<<"row"<<endl;
	for(j=0;j<c;j++)
		cin>>ptr[i][j];
}
cout<<"Elements are :"<<endl;
for(i=0;i<r;i++,cout<<endl)
	for(j=0;j<c;j++)
		cout<<ptr[i][j]<<" ";
for(i=0;i<r;i++)
{
	delete []ptr[i];
	ptr[i]=NULL;
}
delete []ptr;
ptr=NULL;
}

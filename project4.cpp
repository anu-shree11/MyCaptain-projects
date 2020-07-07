#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	int *ptr,i;
	ptr=arr;
	cout<<"Enter the elements:\n";
	for(i=0;i<5;i++)
	{
		cin>>*(ptr+i);
	}
	cout<<"\n\nYou entered:\n";
	for(i=0;i<5;i++)
	{
		cout<<*(ptr+i)<<"\n";
	}
}

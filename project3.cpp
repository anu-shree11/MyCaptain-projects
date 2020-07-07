#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"Enter your age: ";
	cin>>age;
	switch(age>=18)
	{
		case 1: cout<<"\nYour are eligiblr to vote";
		break;
		case 0: cout<<"\nYou are not eligible to vote";
		break;
		default: cout<<"default case";
	}
}

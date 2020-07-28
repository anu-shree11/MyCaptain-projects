#include<iostream>
using namespace std;
class time
{
	private:
		int HH;
		int MM;
		int SS;
		int seconds;
	public:
		insert();
		display();
		calc_seconds();
};
time :: insert()
{
	cout<<"Enter time\n";
	cout<<"Hours? ";
	cin>>HH;
	cout<<"Minutes? ";
	cin>>MM;
	cout<<"Seconds? ";
	cin>>SS;
}
time :: calc_seconds()
{
	seconds=(HH*3600)+(MM*60)+SS;
}
time :: display()
{
	cout<<"The time is: "<<HH<<":" <<MM <<":" <<SS;
	cout<<"\nTime in total seconds is: "<<seconds;
}
int main()
{
	time t;
	t.insert();
	t.calc_seconds();
	t.display();
}

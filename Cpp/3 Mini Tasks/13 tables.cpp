#include <iostream>
#include <iomanip>
using namespace std;
void function();
void seperator();
int main()
{
	cout<<"enter the number N = ";
	function();
}

void function()
{
	int a;
	cin>>a;
	cout<<"the table from 1 to "<<a<<" are :\n\n";
	for (int b=1; b<=a; b++)
	{
	for (int c=b; c<=b*10; c+=b)
	{cout<<setw(4)<<c;	}
	cout<<"\n";
	seperator();}
}
void seperator()
{
	for (int b=1;b<=15; b++)
	cout<<setw(4)<<"*";
	{
		cout<<"\n";
	}
}


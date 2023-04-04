#include <iostream>
using namespace std;

void print ()
{
	cout<<"\nprinted";
}

void function1()
{
	int a,b;
	cout<<"enter two number\n";
	cin>>a>>b;
	cout<<"substraction = "<<a-b;
	print();
}

void function()
{
	int a,b;
	cout<<"enter two  number\n";
	cin>>a>>b;
	cout<<"sum= "<<a+b<<"\n";
	function1();
}

int main()
{
	function();
}


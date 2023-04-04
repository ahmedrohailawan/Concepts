#include <iostream>

using namespace std;
int main ()
{
	int a,b;
	cout<<"enter first number\n";
	cin>>a;
	cout<<"enter second number\n";
	cin>>b;
	if (a>b)
	{
		cout<<"first number is greater "<<endl;
	}
	else if (b>a)
	{
		cout<<"second number is greater"<<endl;
	}
	else if (a==b)
	{
		cout<<"both are equal "<<endl;
	}
	
}

#include<iostream>
using namespace std;
void separator (int a, int b)
{
	if (a>0)
	{
		cout<<a%b;
		separator(a/b,b);
		
	}
}
int main()
{
	int a;
	cout<<"Enter number = ";
	cin>>a;
	cout<<"reverse is   = ";
	int b=10;
	separator(a, b);
	return 0;
}


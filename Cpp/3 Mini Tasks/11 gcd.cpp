#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
	int a,b;
	cout<<"enter 1st numbrer ";
	cin>>a;
	cout<<"\nenter 2nd number ";
	cin>>b;
	for (;a!=b;){
		if (a>b)
		a-=b;
		else
		b-=a;
	}
	cout<<"\nGCD ="<<a;
	return 0;
}

#include <iostream>

using namespace std;
int main()
{
	char a;
	int b;
	cin>>a;
	toascii(a);
	b=a%2;
	if (a>=65 && a<=90)
	cout<<"\nit is uppercase alphabet";
	if (a>=97 && a<=122)
	cout<<"\nit is lower case alphabet";
	if (a>=32 && a<=47)
	cout<<"\nit is special symbol";
	if (a>=58 && a<=64)
	cout<<"\nit is special symbol";
	if (a>=91 && a<=96)
	cout<<"\nit is special symbol";
	if (a>=123 && a<=126)
	cout<<"\nit is special symbol";
	if (a>=48 && a<=57)
	cout<<"\nit is digit ";
	if (b==0 && a>=48 && a<=57)
	{cout<<"(even)"; }
	else if (b!=0 && a>=48 && a<=57)
	cout<<"(odd)";
	return 0;	
}


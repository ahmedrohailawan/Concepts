#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
	cout<<"\t\tint type array\nenter five value\n";
	int b[5];
	for(int a=1;a<=5;a++)
	{
		cin>>b[a];
	}
		for(int a=1;a<=5;a++)
	{
		cout<<b[a]<<setw(5);
	}
	
	cout<<"\n\t\tlength of array is \n";
	cout<<sizeof(b)/sizeof(b[0]);
	cout<<"\n";
	cout<<"\n\t\tsize of array is \n";
	cout<<sizeof(b);
	cout<<"\n";
	
	cout<<"\n\t\tchar type array\nenter five value\n";
	char c[5];
	for(char a=1;a<=5;a++)
	{
		cin>>c[a];
	}
		for(char a=1;a<=5;a++)
	{
		cout<<c[a]<<setw(5);
	}
	
	
	cout<<"\n\t\tfloat type array\nenter five value\n";
	float d[5];
	for(int a=1;a<=5;a++)
	{
		cin>>d[a];
	}
		for(int a=1;a<=5;a++)
	{
		cout<<d[a]<<setw(5);
	}
}

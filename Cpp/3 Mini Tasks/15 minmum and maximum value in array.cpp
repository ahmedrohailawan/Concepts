
#include <iostream>
#include <iomanip>
using namespace std;

void maximum(int a[20],int c)
{
	for (int b=0;b<20;b++)
	{if (c>a[b])
		c=a[b];
	}
	cout<<"\n\nthe minimum value is "<<c;
}



void minimum(int a[20],int c)
{
		
	for (int b=0;b<20;b++)
	{if (c<a[b])
		c=a[b];
	}
	cout<<"\nthe maximum value is "<<c;
}



void sumaverge(int sum,int a[20])
{
		for (int b=0;b<20;b++)
	{
		sum+=a[b];
	}
	cout<<"\nsum="<<sum;
	int y;
	y=sum/20;
	cout<<"\naverge="<<y;
}



int main()
{
	int a[20],sum=0;
	cout<<"enter integer array of 20 indexes :\n ";
	for (int b=0;b<20;b++)
	cin>>a[b];
	system("cls");
	cout<<"your integer array = ";
	for (int b=0;b<20;b++)
	cout<<a[b]<<setw(4);
	int c=a[0];
	
	
	maximum(a,c);
	minimum(a,c);
	sumaverge(sum,a);
	
}

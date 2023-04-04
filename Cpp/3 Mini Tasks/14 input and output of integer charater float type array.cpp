#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	cout<<"enter six integers \n";
	int m[6];
	for (int a=0; a<6; a++)
	cin>>m[a];
	
	cout<<"\nenter five float values = \n";
	float n[5];
	for (int a=0; a<5; a++)
	cin>>n[a];
	
	cout<<"\nenter four character values \n";
	char o[4];
	for (int a=0; a<4; a++)
	cin>>o[a];
	
	cout<<"integer array = ";
	for (int b=0; b<6; b++)
	cout<<m[b]<<setw(4);
	
	cout<<"\nfloat array = ";
	for (int d=0; d<5; d++)
	cout<<n[d]<<setw(6);
	
	cout<<"\ncharacter array = ";
	for (int f=0; f<4; f++ )
	cout<<o[f]<<setw(4);	
}


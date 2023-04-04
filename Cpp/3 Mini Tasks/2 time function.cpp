#include <iostream>
#include <iomanip>
#include <windows.h>
#include <unistd.h>
#include <cmath>
using namespace std;
int main()
{
	int a,hours,minutes,seconds;
	cout<<"press 01 or any integer to start\n\t\t\t\thour  minutes seconds \n";
	cout<<"\t\t\t\t00      00      00\n";
	cout<<"-----------------------------------------------";
	cin>>a;
	for (hours=0; hours<=10; hours++)
	{
		for (minutes=0; minutes<=59; minutes++)
		{
			for (seconds=0; seconds<=59; seconds ++)
			{
				system("cls");
				cout<<setfill('0')<<setw(2);
				cout<<hours<<" : ";	
				cout<<setfill('0')<<setw(2);
				cout<<minutes<<" : ";				
				cout<<setfill('0')<<setw(2);
				cout<<seconds<<endl;
				sleep(01);
			}
		}
	}
}


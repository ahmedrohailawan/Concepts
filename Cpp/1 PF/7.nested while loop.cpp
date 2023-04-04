#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	int height;
	cout<<"enter number of lines =";
	cin>>height;
	int a=1;
	while (a<=height)
	{
		int b=1;
			while (b<=2*a-1)
			{
				cout<<"*";
				b++;
			}
			cout<<endl;
			a++;
	}	
	return 0;
 } 

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	int lines;
	cout<<"enter number of lines = ";
	cin>>lines;
	for (int a=1; a<=lines; a++)
	{
			for (int b=1; b<=2*a-1;b++)
			{
				cout<<"*";
			}
			cout<<endl;
	}	
	return 0;
 } 

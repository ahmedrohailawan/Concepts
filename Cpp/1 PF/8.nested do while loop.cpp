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
	do {
	int b=1;
		do {
			cout<<"*";
			b++;
			}while (b<=2*a-1);
		cout<<endl;
		a++;
	    }while (a<=height);
			
	return 0;
 } 

#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
	int a,b=1;
	cout<<"entrer the number : ";
	cin>>a;
	{
	for (int c=1;c<=a;c++)
	b=b*c;	}	
	cout<<"the factorial of "<<a<<" is "<<b;
}


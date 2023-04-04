#include <iostream>
using namespace std;
int main ()
{
	int a,b,sum=0;
	cout<<"enter number : ";
	cin>>a;
	while (b<=a){
		sum+=b;
		b++;
	}
	cout<<"sum of all integers = "<<sum;
	return 0;
}


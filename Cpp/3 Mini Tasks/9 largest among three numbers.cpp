#include <iostream>
using namespace std;

int main()
{
	int a;
	int *aptr=&a;
	int b;
	int *bptr=&b;
	int c=5;
	int *cptr=&c;
	cout<<"enter three numbers \n\n";
	cin>>a>>b>>c;
	cout<<"\n";
	if (*aptr>*bptr  && *aptr>*cptr)
	cout<<*aptr;
	if (*bptr>*aptr  && *bptr>*cptr)
	cout<<*bptr;
	if (*cptr>*aptr  && *cptr>*bptr)
	cout<<*cptr;
	cout<<" is greatest";
	
}


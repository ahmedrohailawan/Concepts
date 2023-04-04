#include <iostream>
#include <string>
using namespace std;
int main()
{
	int y;
	int *yptr=&y;
	cout<<"for int values"<<endl;
	cin>>*yptr;
	cout<<"values using pointers"<<endl;
	cout<<y<<endl;
	cout<<*yptr<<endl;
	cout<<"adressses using pointers"<<endl;
	cout<<yptr<<endl;
	cout<<*&yptr<<endl;
	cout<<&yptr<<endl;
	
	cout<<"for charaters"<<endl;
	char z;
	char *zptr=&z;
	cin>>*zptr;
	cout<<"values using pointers"<<endl;
	cout<<z<<endl;
	cout<<*zptr<<endl;
	cout<<"adressses using pointers"<<endl;
	cout<<zptr<<endl;
	cout<<*&zptr<<endl;
	cout<<&zptr<<endl;
	
	cout<<"for strings "<<endl;
	string food;
	string *fptr=&food;
	cin>>food;
	cout<<"values using pointers"<<endl;
	cout<<food<<endl;
	cout<<*fptr<<endl;
	cout<<"adressses using pointers"<<endl;
	cout<<fptr<<endl;
	cout<<*&fptr<<endl;
	cout<<&fptr<<endl;
	
	
	
}

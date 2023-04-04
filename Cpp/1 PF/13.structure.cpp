#include <iostream>
#include <string>
using namespace std;

struct information
{
	string name;
	int marks;   //matric marks
	string email;
	string pn;  //phone number
	

};

int main()
{
	information a[10];
	cout<<"enter 10 employes  data"<<endl;
	for (int b=0;b<10;b++)
	{
	cout<<"enter your name          ";
	cin>>a[b].name;
	cout<<"enter your matric marks  ";
	cin>>a[b].marks;
	cout<<"enter your email         ";
	cin>>a[b].email;
	cout<<"enter your phone number  ";
	cin>>a[b].pn;
	cout<<endl;
	cout<< "."<<a[b].name<<" information "<<endl;
	cout<<a[b].name<<endl;
	cout<<a[b].marks<<endl;
	cout<<a[b].email<<endl;
	cout<<a[b].pn<<endl;			
	cout<<endl;
}

}

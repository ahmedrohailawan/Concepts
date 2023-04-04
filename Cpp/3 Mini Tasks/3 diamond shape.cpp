#include <iostream>
using namespace std;
int main()
{
	int a,b,c,d;
	cout<<"enter number : ";
	cin>>a;
	cout<<"\n";
	if (a%2==0)
	--a;
b=1;
	do{
		c=0;
		do{
		cout<<" ";
		c++;
		}while(c<=a-b);
			d=1;
			do{
			cout<<"*";
			d++;
			}while(d<=2*b-1);
			    cout<<endl;
			    b++;
    }while(b<=a);
    b=a-1;
b=a;
   do{
   	c=0;
   		do{
   		cout<<" ";
   		++c;
   	
    } while(c<=a-b);
     d=1;
     do{
     	cout<<"*";
     	++d;
	 }while(d<=2*b-1);
	cout<<endl;      
	 --b;
}while(b>=1);
b=a-1;
}


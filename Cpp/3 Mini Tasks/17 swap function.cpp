#include<iostream>
using namespace std;
void swap(int x,int y);
int main()
{
        int a,b;
        cout<<"Enter 1st number = ";
        cin>>a;
        cout<<"Enter 2nd number = ";
        cin>>b;
        cout<<"------------------------------------------";
        cout<<"\nBefore Swapping\n"<<" "<<a<<"\t"<<b<<"\n";
        swap(a,b);
        cout<<"\nmain After Swapping \n"<<" "<<a<<"\t"<<b<<"\n\n\n";
}
void swap(int a,int b )
{
	 int c;
     c=a;
     a=b;
     b=c;
     cout<<"\nAfter Swapping  \n"<<" "<<a<<"\t"<<b<<"\n";
     cout<<"------------------------------------------\n\n";
}


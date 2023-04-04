#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class A{
	public :
		//declaeartion
		virtual void hi()=0;
};
class B : public A{
	public :
		void hi(){
			//definition
			cout<<"derive class definetion";
		}
};

int main()
{
	A *a;
	B bobj;
	a=&bobj;
	a->hi();
}

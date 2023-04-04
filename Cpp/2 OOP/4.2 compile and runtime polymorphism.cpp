#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class base
{
	public :
		//runtime
	virtual void print(){
		cout <<" print base class";
	}
	//compile
	void show(){
		cout <<" show base class";
	}
};

class derived : public base
{
	public :
	 void print(){
		cout <<" print  derive class";
	}
	void show(){
		cout <<" show derive class";
	}
};

int main()
{
	base *bptr;
	derived d;
	bptr=&d;
	bptr->print();
	bptr->show();
	
}

#include<iostream>
using namespace std;
class A{
	public:
		virtual void hi()=0;
};
class B:public A{
	public:
		void hi(){
			cout<<"Derived class definetion";
		}
};

int main(){
	A *a;
	B bobj;
	a=&bobj;
	a->hi();
}

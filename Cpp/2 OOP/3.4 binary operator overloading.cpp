#include <iostream>
using namespace std;

class add{
	int a;
	public :
		add(){
			a=0;
		}
		void enter(){
			cout<<"enter values ";
			cin>>a;
		}
		void result(){
			cout<<"answer = "<<a;
		}
		add operator+(add p){
			add temp;
			temp.a=p.a+a;
			return temp;
		}
};

int main()
{
	add x,y,z;
	x.enter();
	y.enter();
	z=x+y;
	z.result();


}

#include <iostream>
using namespace std;

class weight {
	int kg;
	public :
		weight(){
			kg=0;
		}
		void enter (){
			cin>>kg;
		}
		void print(){
			cout<<"weight is "<<kg;
		}
		
		void operator++(){
			++kg;
		}
};


int main()
{
	weight obj;
	obj.enter();
	++obj;
	obj.print();
}

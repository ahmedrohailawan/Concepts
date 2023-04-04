//constructor overloading
#include<iostream>
using namespace std;

class construct{
	public:
		float area; //attribute
		
		construct()// constructor 1
		{
			area = 0;
		}
		construct(int a, int b)//overloaded constructor
		{
			area = a*b;
		}
		
		void display(){
			cout<<area<<endl;
		}
	
};

int main(){
	construct c;
	construct c1(5,6);
	c.display();
	c1.display();
}

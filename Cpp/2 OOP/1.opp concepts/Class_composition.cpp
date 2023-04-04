#include<iostream>
using namespace std;

class X{
	private:
		int d;
	public:
		void set_value (int k){
			d=k;
		}
		void show_sum(int n){
			cout<<"Sum of "<<d<<"and" <<n<<"="<<d+n<<endl;
		}
};

class Y{
	public:
		X a;
		void print_result(){
			a.show_sum(5);
		}
};

int main(){
	
	Y b;
	b.a.set_value(20);
	b.a.show_sum(100);
	b.print_result();
}

/*
The part (member) is part of the object (class)
The part (member) can only belong to one object (class) at a time
The part (member) has its existence managed by the object (class)
The part (member) does not know about the existence of the object (class)
*/

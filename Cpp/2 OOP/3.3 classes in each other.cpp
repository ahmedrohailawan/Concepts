#include <iostream>
using namespace std;
class X{
	private:
		int d;
	public:
		void set_value(int k)
		{
			d=k;
			}
			void show_sum(int n){
				cout<<"sum of "<<d<<"and"<<n<<"="<<d+n;
			}	
};
class Y{
	public:
		X a;
		void print_result(){
			a.show_sum(5);
		}
};
int main()
{
	Y b;
	b.a.set_value(20);
	b.a.show_sum(200);
	b.print_result();
}

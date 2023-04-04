#include<iostream>
using namespace std;

class box{
	private:
		int length;
		int* breadth;
		int height;
	public:
		//constructor
		box()
		{
			breadth = new int;
			
		}
		
		void set_dim(int len,int brea, int heig)
		{
			length = len;
			*breadth = brea;
			height = heig;
		}
		
		void show_data()
		{
			cout<<length<<endl;
			cout<<*breadth<<endl;
			cout<<height<<endl;		
		}
		
		box(box& sample)
		{
			length = sample.length;
			breadth = new int;
			*breadth = *(sample.breadth);
			height = sample.length;
		}
};

int main()
{
	box first;
	first.set_dim(10,11,12);
	first.show_data();
	box second = first;
	second.show_data();
	
	return 0;
	
	
}

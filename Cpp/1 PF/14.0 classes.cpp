#include <iostream>
#include <string>
using namespace std;

class Phone{
private:	
	string p_name;
	string p_size;
public:	
	Phone (string name,string size){
		p_name=name;
		p_size=size;
	}
	void makecall()
	{
		cout<<"making a call using "<<p_name<<endl;	
	}
	
	void receievecall()
	{
		cout<<"recieving a call using "<<p_name<<endl;
	}
	
	
};


int main()
{
	Phone samsung("samsung","1000x500");
	samsung.makecall();
	samsung.receievecall();
	cout<<endl;
	Phone oppo("oppo","2000");
	oppo.makecall();
	oppo.receievecall();
}

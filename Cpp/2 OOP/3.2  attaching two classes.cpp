#include <iostream>
#include<string>
using namespace std;

class Birthday{
	private:
			int month;
			int day;
			int year;
	public:
		Birthday(int cmonth,int cday,int cyear){
			month=cmonth;
			day=cday;
			year=cyear;
		}
		void printdate()
		{
			cout<<month<<"-"<<day<<"-"<<year<<endl;
		}

};
class People{
	private :
	string name;
	Birthday dateofbirth;
	public: 
	People (string cname,Birthday cdateofbirth)
	:name(cname),
	dateofbirth(cdateofbirth)
	{
	}
		void printinfo(){
			cout<<name<<"was born on :";
			dateofbirth.printdate();
		}
};

int main()
{
	Birthday birthobject(03,06,1996);
	People infoobject("he was born in ",birthobject);
	infoobject.printinfo();
}

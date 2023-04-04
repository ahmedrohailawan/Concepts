#include<iostream>
#include<string>
using namespace std;

class Birthday{
	public:
		Birthday(int cmonth,int cday, int cyear){
			
			cmonth=month;
			cday=day;
			cyear=year;
		}
		
		void printDate(){
			
			cout<<month<<"-"<<day<<"-"<<year<<endl;
		}
		
	private:
		int month;
		int day;
		int year;
};

class People{
	
	public:
		People (string cname,Birthday cdateOfBirth)
		:name(cname),
		dateOfBirth(cdateOfBirth)
		{		
		}
		
		void printInfo(){
			cout<<name<<" was born on: ";
			dateOfBirth.printDate();
		}
		
		private:
			string name;
			Birthday dateOfBirth;
};

int main(){
	Birthday birthObject(03,06,1996);
	People infoObject(" Joey Tribianni was born in: ",birthObject);
	infoObject.printInfo();
	
}

//constructor is supposed to be setting the data members to the values 
//passed in as parameter, i am doing exactly the opposite.

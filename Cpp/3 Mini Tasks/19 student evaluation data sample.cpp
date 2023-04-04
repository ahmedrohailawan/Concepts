#include <iostream>
#include <iomanip>
#include <conio.h>
#include <string>
using namespace std;

class studentpersonal{
	protected:
	int roll_no=0,ag_e=0;
	string name,gender;
	public:
		studentpersonal(int roll, int age, string n, string g)
		{
		roll_no=roll;
		ag_e=age;
		name=n;
		gender=g;
	}
};
class studentmarks: public studentpersonal{
	protected:
		int mark1=0,mark2=0,mark3=0,mark4=0;
	public:
		studentmarks(int roll,int age,string n,string g,int m1,int m2, int m3,int m4) 
		: studentpersonal(roll,age, n,g)
		
		{
		mark1=m1;
		mark2=m2;
		mark3=m3;
		mark4=m4;	
	}
};

class studentsports{
	protected:
	int score=0;
};
class studentresults: public studentmarks , public studentsports{
		protected:
			float total=0,averge=0,grade=0;
		public:
			studentresults (int roll, int age, string n, string g,int m1,int m2, int m3,int m4)
			: studentmarks(roll,age,n,g,m1,m2,m3,m4) , studentsports() {
			}
		void display_result()
		{
			total= mark1+mark2+mark3+mark4;
			averge=total/4;
			grade=(total/200)*100;
			
			cout<<"\n\nStudent Evaluation\n\n";
			cout<<"Name    : "<<name<<endl;
			cout<<"Roll no : "<<roll_no<<endl;
			cout<<"Age     : "<<ag_e<<endl;
			cout<<"Gender  : "<<gender;
			cout<<"\n\t  Total Marks :"<<total;
			cout<<"\nAverge : "<<averge<<"\t\t"<<"Percentage : "<<grade<<"%";
		}			
};


int main()
{
	int roll_no=0,ag_e=0,mark1=0,mark2=0,mark3=0,mark4=0;
	string name,gender;
	cout<<"\t\t\tWelcome to Database\n....................Please enter your data below..............\n\n";
	cout<<"Enter your Name     : ";getline(cin,name);
	cout<<"Enter your Roll no  : ";cin>>roll_no;
	cout<<"Enter your Age      : ";cin>>ag_e;
	cout<<"Gender              : ";gender=getche();
	cout<<"\n\nNow, enter your marks out of 50 below..........\n\n";
	cout<<"Physics   : ";cin>>mark1;
	cout<<"Chemistry : ";cin>>mark2;
	cout<<"Math      : ";cin>>mark3;
	cout<<"English   : ";cin>>mark4;
	
	studentresults bio(roll_no,ag_e,name,gender,mark1,mark2,mark3,mark4);
	bio.display_result();
	return 0;
	
}

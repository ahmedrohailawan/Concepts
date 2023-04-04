#include <iostream>
using namespace std;

class Time
{
	int hours;
	int minutes;
	public:
		Time(){
			hours=0;
			minutes=0;
		}
		Time(int h,int m)
		{
			hours=h;
			minutes=m;
		}
		void display(){
		cout<<"hours are "<<hours<<endl;
		cout<<"minutes are "<<minutes<<endl;
		}
		
	Time operator++(){
	++minutes;
	if(minutes>=60)
		{
		++hours;
		minutes-=60;
		return Time(hours,minutes);
		}
	}
		Time operator++(int ){
			Time T(hours,minutes);
		if(minutes>=60)
		{
		++hours;
		minutes-=60;
		return T;
		}	
		}
		
};

int main(){
	Time T1(11,59);
 	Time T2(10,42);
 	++T1;
 	T1.display();
 	T2++;
 	T2.display();
}

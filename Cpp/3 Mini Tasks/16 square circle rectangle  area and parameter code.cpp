#include <iostream>
#include <cmath>

using namespace std;

void function1()
{
    int area, radius ,perimeter,length , breadth;
	
	cout<<"\nenter the lenght of sides of square in cms : ";
	cin>>length;
	area=(length*length);
	length=length;
	cout<<"\nArea of square is : "<<area<<" sq.cms "<<endl;
	perimeter = length+length+length+length;
	cout<<"\nperimeter of square is : "<<perimeter<<" cms "<<endl;
}

void function2()
{	 
    int area, radius ,perimeter,length , breadth;
	
	cout<<"\nenter the radius of circle : ";
	cin>>radius;
	area= 3.14257*(radius*radius);
	cout<<"\narea of circle is : "<<area<<" sq.cms "<<endl;
	perimeter = 3.14754*2*radius;
	cout<<"\nperimeter of circle is : "<<perimeter<<" cms"<<endl;
}
void function3()
{
     int area, radius ,perimeter,length , breadth;
	cout<<"\nEnter the lenght of side of reactangle in cms : ";
	cin>>length;
	cout<<"\nenter the breadth of side of reactangle in cms : ";
	cin>>breadth;
	area= length*breadth;
	cout<<"\narea of rectangle is : "<<area<<" sq.cms "<<endl;
	perimeter=2*(length+breadth);
	cout<<"\nperimeter of rectangle is : "<<perimeter<<" cms"<<endl;
	
	
}
int main()
{
    	char b;
	cout<<"enter desired shape  :\n ";
	cout<<"\ts : for square \n\tc : for circle\n\tr : for rectangle\n";
	cin>>b;
	
	switch(b ) 
{
	case 's' :
	function1();
	break;
	
	case 'c' :
	function2();
	break;
	
	case 'r' :
	function3();
	break;
	
	default :
	cout<<"wrong entry try again later :";
	
}

return 0;

}


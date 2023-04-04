#include <iostream>
#include <iomanip>
using namespace std;
void function()
{
	static char
	c = 'b';
	if ( c == 'b' ) 
	c = 'Z';
	if ( c == 'A' )
	{
		cout<<c<<setw(12);
		c--;
	}
	else
	{
		cout<<c<<setw(12);
		c--;
		function();
	}
}


int main()
{
	cout<<"\t\t\t\t\tAlphabets  Z to A\n\n";
	function();

	return 0;
}


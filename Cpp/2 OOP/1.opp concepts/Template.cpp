#include<iostream>
using namespace std;

template< typename T, typename U >
void add( T a, U b )
{
cout<< a+b;
}

int main()
{
float d = 10.5674;
float i = 10.67; 
 add(d, i);
   return 0;
}


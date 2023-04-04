#include<iostream>
using namespace std;

template< typename T, typename U >
T my_cast( U a )
{
return (T)a;
}

int main()
{
double d = 10.5674;
int i = my_cast<double>(d);
return 0;
}


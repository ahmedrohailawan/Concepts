#include<iostream>
#include<cstring>
using namespace std;

template<  typename  T >

bool  isEqual(T  x, T y)
{
return (x == y);
}
template<>
bool isEqual<const char*>(const char* x, const char* y)
{
return (strcmp(x, y) == 0);
}
int main()
{
char a[] = "hello";
char b[] = "hello";  
cout<<isEqual(a, b); // ok 
return 0;
}


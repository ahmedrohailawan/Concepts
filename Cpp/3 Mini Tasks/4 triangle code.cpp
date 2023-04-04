#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
int a;
cout << "Enter the number of rows: ";
cin >> a;
for (int b = 1; b <= a; b++)
{
for (int c = b; c <= a; c++)
{
cout << "   ";
}
for (int d = 1; d <= b; d++)
{
if (d == 1 || d == b || b== a)
{
cout << " * ";
}
else
{
cout << "   ";
}
}
cout << endl<<endl;
}
}


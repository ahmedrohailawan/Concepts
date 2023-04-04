#include<iostream>
using namespace std;
template <typename T, typename U>

U compare(T value1, U value2) 
{  
if (value1 < value2) 
return -1; 

if (value2 < value1) 
return 1;  

return 0;
}

int main(){
	cout << compare(10, 20) << endl; // ok  
	cout << compare(12.55, 11) << endl; // ok
return 0;
}



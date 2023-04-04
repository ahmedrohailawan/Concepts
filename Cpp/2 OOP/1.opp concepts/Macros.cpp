#include<iostream>
using namespace std;

#define MIN(a,b)(((a)<(b)) ? a : b)

int main(){
	int i,j;
	i=23;
	j=27;
	cout<<"Minimum is :"<<MIN(i,j)<<endl;
	
}

#include<iostream>
using namespace std;

#define DEBUG
#define MIN(a,b)(((a)<(b)) ? a : b)


int main(){
	int i,j;
	i=23;
	j=27;

#ifdef DEBUG
	cerr<<"Trace: Inside main Function "<<endl;
#endif

cout<<"Minimum is :"<<MIN(i,j)<<endl;

#ifdef DEBUG
	cerr<<"Trace: Coming out of main function "<<endl;
#endif
	
}


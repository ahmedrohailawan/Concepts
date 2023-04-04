#include <iostream>
using namespace std;

int main()
{
    char a[150];
    int b=0;
    cout << "Enter a string :  ";
    cin>>a;
    for(int c= 0; a[c]!='\0'; ++c)
    {
        if(a[c]=='a' || a[c]=='e' || a[c]=='i' ||
           a[c]=='o' || a[c]=='u'  )
        {
            ++b;
        }
    }

    cout << "\n total vowels in a string = " << b << endl;
    return 0;
}	

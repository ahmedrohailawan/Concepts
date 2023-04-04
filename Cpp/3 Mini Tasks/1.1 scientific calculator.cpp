#include <iostream>
#include <cmath>

using namespace std;

int main()

{
	system("cls");
	float a,b;
	int c;
	int d;
	int repeat;
	float sum;
	float substraction;
	float multiplication;
	float division;
	cout<<"\n\t\t    \"scientific calulator\"\n";
	cout<<"------------------------------------------------------------------------\n";
	cout<<"\t\t\tchoose function\n";
	cout<<"------------------------------------------------------------------------\n\n";
	cout<<"1:addition\t\t"<<"  2:substraction\t\t"<<"3:multiplication\n";
	cout<<"4:division\t\t"<<"  5:sin\t\t\t"<<"\t6:cos\n";
	cout<<"7:tan\t\t\t"<<"  8:natural lagarithm\t"<<"\t9:common logarithm\n";
	cout<<"10:exponential\t\t"<<"  11:raised to power\t\t"<<"12:square root\n";
	cout<<"13:ceilling\t\t"<<"  14:floor\n\n";
	cin>>c;
	switch(c)
	{
		case 1:
			cout<<"enter first value \n";
			cin>>a;
			cout<<"enter second value\n";
			cin>>b;
			sum=a+b;
			cout<<"\nanswer= "<<sum;
			break;
		case 2:
			cout<<"enter first value\n";
			cin>>a;
			cout<<"enter second value\n";
			cin>>b;
			substraction=a-b;
			cout<<"\nanswer= "<<substraction;
			break;
		case 3:
			cout<<"enter first value\n";
			cin>>a;
			cout<<"enter second value\n";
			cin>>b;
			multiplication=a*b;
			cout<<"\nanswer= "<<multiplication;
			break;
		case 4:
			cout<<"enter first value\n";
			cin>>a;
			cout<<"enter second value\n";
			cin>>b;
			division=a/b;
			cout<<"\nanswer= "<<division;
			break;
		case 5 :
			cout<<"enter number\n";
			cin>>a;
			cout<<"\nanswer= "<<sin(a);
			break;
		case 6 :
		    cout<<"enter number\n";	
		    cin>>a;
		    cout<<"\nanswer= "<<cos(a);
		    break;
		case 7 :
		    cout<<"enter number\n";
			cin>>a;
			cout<<"\nanswer= "<<tan(a);
			break;   	
		case 8 :
			cout<<"enter number\n";
			cin>>a;
			cout<<"\nanswer= "<<log(a);
			break;	
		case 9 :
		    cout<<"enter number\n";
			cin>>a;
			cout<<"\nanswer= "<<log10(a);
			break;
		case 10 :
		    cout<<"enter number\n";  
		    cin>>a;
			cout<<"\nanswer ="<<exp(a);
			break ;
		case 11 :
		    cout<<"enter base\n";
			cin>>a;  
			cout<<"enter power\n";
			cin>>b;
			cout<<"\nanswer="<<pow(a,b);	
			break;		
		case 12 :
		    cout<<"enter number\n";
		    cin>>a;
		    cout<<"\nanswer= "<<sqrt(a);
		    break;
		case 13 :    
	        cout<<"enter number\n";
	        cin>>a;
	        cout<<"\nanswer="<<ceil(a);
	        break ;
		case 14 :
		    cout<<"enter number\n";
			cin>>a;
			cout<<"\nanswer="<<floor(a);
			break ;
		default :
		cout<<"\nplease enter number 1 to 14 to  perform assigned operation"; 		
					    
    }
	cout<<"\n\n\"press 1 to contine, 0 to exit(performing operation)\"\n\n";
	cin>>d;
	repeat=d;
	switch(d)
	{
		case 1:
		if ( repeat== 1)
		{
		main();	
			}	
		case 2 :
		if (repeat ==0)
		{
		main();
			}
		default :
		cout<<"\nplz enter number 1 to continue and 0 to exit (performing operation)\n";		
	}
}

//codepen
//https://codepen.io/ahmedwaheedyousafawan/pen/BapKXwV

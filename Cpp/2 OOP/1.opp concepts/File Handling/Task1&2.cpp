#include <iostream>
#include <fstream>
using namespace std;

void output_file()
{
	char outputdata[50];
	ifstream fin;
	fin.open("data.txt");
	if(!fin.fail())
	{
		// Continue reading until end
		while(fin>>outputdata)
		{
			cout<<outputdata<<endl<<endl;
		}
	}
	fin.close();
}

int main ()
{
jumpmain:
	int a;
	cout<<"Press 1 for Data write"<<endl;
	cout<<"Press 2 for Data read"<<endl;
	cout<<"Option Selected: ";
	cin>>a;
	if(a==1)
	{
		char str[50];
		char name[50];
		char dob[50];
		char age[3];
		char army[]="ARMY";
		char navy[]="NAVY";
		char airforce[]="AIRFORCE";
		char ssg[]="SSG";
		char amc[]="AMC";
    char space[2]={' ','\0'};
		char ch='y';
		int opt;
		do
		{
      
			cout<<"Enter Name: ";
			cin>>name;
			cout<<"Enter DOB dd/mm/yy: ";
			cin>>dob;
			cout<<"Enter Age: ";
			cin>>age;
			cout<<endl<<"The options for volunteering are as follows: "<<endl<<endl;
			ifstream fin;
			int count = 1;
			fin.open("branches.txt");
			if(!fin.fail())
			{
				while(fin>>str)
				{
					cout<<"Option "<<count<<": "<<str<<endl;
					count++;
				}
			}
jump:

      ofstream fout;
			fout.open("data.txt", ios::app);
      fout<<name;
      fout<<dob;
      fout<<age;
			cout<<endl<<"Enter your option: ";
			cin>>opt;
      if(opt==1)
			{
        fout<<army;
        fout<<space;
			}
			else if(opt==2)
			{
				fout<<navy;
        fout<<space;
			}
			else if(opt==3)
			{
        fout<<airforce;
        fout<<space;
			}
			else if(opt==4)
			{
        fout<<ssg;
        fout<<space;
			}
			else if(opt==5)
			{
      	fout<<amc;
        fout<<space;
			}
			else
			{
				cout<<"Invalid Option"<<endl;
				goto jump;
			}
			cout<<"Do you want to add another data? Press y/Y: ";
			cin>>ch;
			fin.close();
			fout.close();
		}
		while(ch=='y' || ch=='Y');
	}
	else if(a==2)
	{
		output_file();
	}
	else
	{
		cout<<endl<<"Invalid Option"<<endl<<endl;
		goto jumpmain;
	}
}

#include<iostream>
using namespace std;

int queue[5], n=5, front =  -1, rear = -1;

void Insert(){
	int val;
	
	if(rear == n-1)
	{
		cout<<"Queue Overflow"<<endl;
	}
	else{
		
		if (front == -1)
		front = 0;
		cout<<"Plz insrt elmt "<<endl;
		cin>>val;
		rear++;
		queue[rear] = val;
	}
}

void Remove(){
	
	if(front == -1 || front > rear){
		cout<<"Queue Underflow"<<endl;
			return;
	}
	else {
		cout<<"Element removed is : "<<queue[front]<<endl;
		front++;
	}
}

void Show(){
	if (front == -1)
	cout<<"queue is empty"<<endl;
		else{
			cout<<"Queue elements are: ";
			for (int i = front; i<=rear; i++)
			{
				cout<<queue[i]<<" "<<endl;
			}
		}
	}

int main(){

int ch;
cout<<"1) Insert Element"<<endl;
cout<<"2) Remove Element"<<endl;
cout<<"3) Display Element"<<endl;
cout<<"4) Exit"<<endl;

do{
	cout<<"Enter Operation: "<<endl;
	cin>>ch;
	switch (ch){
		case 1:Insert();
		break;
		case 2:Remove();
		break;
		case 3:Show();
		break;
		case 4:cout<<"Exit"<<endl;
		break;
		default: cout<<"Invalid"<<endl;
		}
	}
	while(ch!=4);
	return 0;
	}



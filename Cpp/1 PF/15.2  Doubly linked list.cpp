#include <iostream>
using namespace std;
class node{
	public:
		int data;
		node* next;
		node* pre;
		node(int value){
			data=value;
			next=NULL;
			pre=NULL;
		}
};

void insertathead(node* &head,int value){
	node *n=new node(value);
	n->next=head;
	if(head!=NULL)
	{
	head->pre=n;	
	}
	head=n;	
}

void insertattail(node* &head, int value)
{
	node* n=new node(value);
	if (head==NULL){
		insertathead(head,value);
		return;
	}
	node* temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=n;
	n->pre=temp;
}
void display(node* head)
{
	node* temp=head;
	while (temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
void deleteathead(node* &head)
{
	
	if (head==NULL){
		return;
	}
	if (head->next==NULL)
	{
		deleteathead(head);
		return;
	}
	node* todelete=head;
	head=head->next;
	head->pre=NULL;
	delete todelete;
}

void deletion(node* &head,int pos)
{
	if (pos==1){
		deleteathead(head);
	}
	node* temp=head;
	int count=1;
	while(temp!=NULL && count!=pos){
		temp=temp->next;
		count++;
	}
	temp->pre->next=temp->next;
	if (temp->next!=NULL){
	temp->next->pre=temp->next;	
	}
	delete temp;
}

int main()
{
	node* head=NULL;
	insertattail(head,1);
	insertattail(head,2);
	insertattail(head,3);
	display(head);
	insertathead(head,4);
	display(head);
	deletion(head,3);
	display(head);
	deleteathead(head);
	display(head);
}

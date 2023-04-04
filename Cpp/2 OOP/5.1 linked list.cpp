#include <iostream>
using namespace std;
class node{
	public:
		int data;
		node* next;
		node(int value){
			data=value;
			next=NULL;
		}
		
};

void insertattail(node* &head, int value)
{
	node* n=new node(value);
	if (head==NULL){
		head=n;
		return ;
	}
	node* temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=n;
}
void insertathead(node* &head,int value){
	node *n=new node(value);
	n->next=head;
	head=n;	
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

void deletion(node* &head,int value)
{
	node* temp=head;
	while(temp->next->data!=value){
		temp=temp->next;
	}
	node* todelete=temp->next;
	temp->next=temp->next->next;
	delete todelete;
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
	
	delete todelete;
}

int main()
{
	node* head=NULL;
	cout<<"The list is empty in the starting\n\nAfter insertion, link list will be\n";
	insertattail(head,1);
	insertattail(head,2);
	insertattail(head,3);
	display(head);
	cout<<"\n\nAfter adding element in list\n";
	insertathead(head,4);
	display(head);
	cout<<"\n\nAfter deletion  of element in link list\n";
	deletion(head,3);
	display(head);
	cout<<"\n\nAfter deleting head of a link list\n";
	deleteathead(head);
	display(head);
}

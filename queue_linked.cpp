#include <iostream>
using namespace std;
struct node{
	int data;
	node* next;
};
void ChenCuoi(node* &head, int a)
{
node* newnode=new node;
newnode->data=a;
newnode->next=nullptr;
if (head==nullptr)
{
head=newnode;
}
else{
node* temp=head;
while(temp->next!=nullptr)
{
	temp=temp->next;
}
temp->next=newnode;
}
node* tmp=head;
while(tmp!=nullptr)
{
	cout<<tmp->data<<" ";
	tmp=tmp->next;
}
cout<<endl;
}
void XoaDau(node* &head)
{
	head=head->next;
	node* tmp=head;
	while(tmp!=nullptr)
{
	cout<<tmp->data<<" ";
	tmp=tmp->next;
}
cout<<endl;
}
int main()
{
	node* head = nullptr;
	while(1)
	{
	cout<<"1. Chen Cuoi"<<endl<<"2. Xoa Dau"<<endl;
	int choice;
	cout<<"Nhap lua chon : ";
	cin>>choice;
	if (choice==1)
	{
		int a;
		cout<<"Nhap gia tri : ";
		cin>>a;
		ChenCuoi(head,a);
	}

else
	{	
		if (head==nullptr) cout<<"Empty"<<endl;
		else if (head->next==nullptr) {
		head=nullptr;
		cout<<"Empty"<<endl;
		}
		else XoaDau(head);
	}
}
}

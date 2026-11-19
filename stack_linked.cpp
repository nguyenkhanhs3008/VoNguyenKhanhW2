#include <iostream>
using namespace std;
struct node{
	int data;
	node* next;
};
void ChenDau(node* &head, int a)
{
node* newnode=new node;

if (head==nullptr)
{
newnode->data=a;
newnode->next=nullptr;
head=newnode;
}
else{
newnode->data=a;
newnode->next=head;
head=newnode;
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
	cout<<"1. Chen Dau"<<endl<<"2. Xoa Dau"<<endl;
	int choice;
	cout<<"Nhap lua chon : ";
	cin>>choice;
	if (choice==1)
	{
		int a;
		cout<<"Nhap gia tri : ";
		cin>>a;
		ChenDau(head,a);
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

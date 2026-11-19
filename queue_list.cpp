#include <iostream>
using namespace std;
int arr[10]={0};
int tail;
void ChenCuoi(int a)
{
	{
	arr[tail]=a;
	tail++;
	}
	for(int u=0;u<tail;u++)
		{
			cout<<arr[u]<<" ";
		}
		cout<<endl;
	}
void XoaDau()
{
	{
		for (int i=0; i<tail-1;i++)
		{
			arr[i]=arr[i+1];
		}
		tail--;
		for(int u=0;u<tail;u++)
		{
			cout<<arr[u]<<" ";
		}
		cout<<endl;
	}
	}
int main()
{
	cout<<"Nhap so phan tu : ";
	cin>>tail;
	if (tail==0) cout<<"Empty"<<endl;
	else
	for(int i=0;i<tail;i++) 
	{
	cout<<"Nhap phan tu "<<i<<" : ";
	cin>>arr[i];}
	while(1)
	{
	cout<<"1. Chen Cuoi"<<endl<<"2. Xoa Dau"<<endl;
	int choice;
	cout<<"Nhap lua chon : ";
	cin>>choice;
	if (choice==1)
	{
		if (tail==9) cout<<"Full"<<endl;
		else {int a;
		cout<<"Nhap gia tri : ";
		cin>>a;
		ChenCuoi(a);
	}

}
	else 
	{	
		if (tail<=1) cout<<"Empty"<<endl;
		else XoaDau();
	}
}
}

#include<iostream>
using namespace std;

struct node
{
	string name;
	int data;
	struct node *link1;
	
};

void printlist(node *t)
{
	//cout<<endl<<t<<endl;
	for(;t != NULL;t=t->link1)
	{
		cout<<t->name<<"  "<<t->data<<endl;
		
	}
}		
node ** inserbeg(node **x)
{
	node *temp;
	cout<<"enter name and date of node   ";
	cin>>temp->name;
	cin>>temp->data;
	temp->link1 = *x;
	*x = temp;
	return x;
	 
}
void inserany(node *q,int d)
{
	node *temp;
	temp = q;
	cout<<"enter name and date of node   ";
	cin>>temp->name>>temp->data;
	for(int y=2;y<d;y++)
	{
		q = q->link1;
	}
	temp->link1 = q->link1;
	q->link1 = temp;
	
}
void inserend(node *q,int d)
{
	node *temp;
	temp = q;
	cout<<"enter name and date of node   ";
	cin>>temp->name>>temp->data;
	q = q->link1;
	for(int y=2;y<d;y++)
	{
		q = q->link1;
	}
	temp->link1 = q->link1;
	q->link1 = temp;
	
}


main()
{
	node *start,*first,*next;
	int n,i;
	cout<<"enter the no of nodes   ";
	cin>>n;
	first = new node;
	cout<<"enter name and date of node   ";
	cin>>first->name>>first->data;
	start=first;
	cout<<endl<<start<<endl;
//	cout<<endl<<start<<endl;
	first->link1=NULL;
	for(i=1;i<n;i++)
	{
		next=new node;
		cout<<"enter name and data of node   ";
		cin>>next->name>>next->data;
		first->link1=next;
		next->link1=NULL;
		first=next;
		
	}
	first=start;
	printlist(start);
	cout<<"enter the position you want to insert element at, 1 for beg , 2 for middle , 3 for ending   ";
	int m;
	cin>>m;
	if(m==1)
	{
		start = *inserbeg(&start);
		
	}
	else if(m == 2)
	{
		cout<<"enter the position of insertion (except 1 and "<<n+1<<")    ";
		int p;
		cin>>p;
		inserany(first,p);
	}
	else if(m==3)
	{
		inserend(first,n);
		
	}
	else
	{
		cout<<"wrong input   ";
	} 
	//cout<<endl<<start<<endl;
	printlist(start);
	
}

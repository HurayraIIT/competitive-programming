#include <bits/stdc++.h>
using namespace std;


struct node{

	int value;
	node *next;

	node()
	{
		value=0;
		next=NULL;
	}
} *head=NULL,*rear=NULL;


void push_in_queue(int x)
{

	node* tmp=new node;
	tmp->value=x;

	if(rear==NULL)
	{
		head=rear=tmp;
		return;
	}

	rear->next=tmp;
	rear=tmp;

}


void print_queue()
{
	node* curr=head;

	if(curr==NULL)
	{
		cout<<"queue is empty"<<endl;
		return;
	}

	while(curr)
	{
		cout<<curr->value<<" ";
		curr=curr->next;
	}

	cout<<endl;
}

void pop_from_queue()
{

	if(head==NULL)
	cout<<"the queue is empty"<<endl;

	else
	head=head->next;
}

int size_of_queue()
{
	int cnt=0;
	node* curr=head;

	while(curr)
	{
		cnt++;
		curr=curr->next;
	}

	return cnt;
}


void last_element_of_queue()
{
	node* curr=head;

	if(curr==NULL)
	{
		cout<<"the queue if empty"<<endl;
		return;
	}

	while(curr->next)
	curr=curr->next;

	cout<<curr->value<<endl;
}

void first_element_of_queue()
{
	if(head==NULL)
	{
		cout<<"the queue if empty"<<endl;
		return;
	}

	cout<<head->value<<endl;
}

void middle_element_of_queue()
{
	if(head==NULL)
	{
		cout<<"the queue if empty"<<endl;
		return;
	}

	node* curr1=head;
	node* curr2=head;

	while(curr2->next&&curr2->next->next)
	{
		curr1=curr1->next;
		curr2=curr2->next->next;
	}

	cout<<curr1->value<<endl;
}

int main()
{
	int n=20;
	int ara[]={1,5,3,6,3,4,6,8,5,32,4,56,8,54,-34,-1,3,45,5,64};

	for(int i=0;i<n;i++)
	push_in_queue(ara[i]);

	print_queue();
	pop_from_queue();
	print_queue();

	cout<<size_of_queue()<<endl;
	first_element_of_queue();
	last_element_of_queue();
	middle_element_of_queue();

	return 0;

}
#include<bits/stdc++.h>
using namespace std;


struct node{

	int value;
	node *next;

	node()
	{
		value=0;
		next=NULL;
	}

} *top=NULL;

void push_in_stack(int x)
{

    node* tmp=new node;
    tmp->value=x;

    if(top==NULL)
    {
        top=tmp;
        return;
    }

    tmp->next=top;
    top=tmp;

}

void print_stack()
{
    node* curr=top;

    if(curr==NULL)
    {
        cout<<"the stack is empty"<<endl;
        return;
    }

    while(curr)
    {
        cout<<curr->value<<" ";
        curr=curr->next;
    }

    cout<<endl;

}

void pop_from_stack()
{
    if(top==NULL)
    cout<<"the stack is empty"<<endl;

    else
    top=top->next;

}

int size_of_stack()
{
    int cnt=0;
	node* curr=top;

	while(curr)
	{
		cnt++;
		curr=curr->next;
	}

	return cnt;

}

void first_element_of_stack()
{
    if(top==NULL)
    {
        cout<<"the stack if empty"<<endl;
		return;
    }

    cout<<top->value<<endl;
}

void last_element_of_stack()
{
	node* curr=top;

	if(curr==NULL)
	{
		cout<<"the stack if empty"<<endl;
		return;
	}

	while(curr->next)
	curr=curr->next;

	cout<<curr->value<<endl;

}

void middle_element_of_stack()
{
	if(top==NULL)
	{
		cout<<"the stack if empty"<<endl;
		return;
	}

	node* curr1=top;
	node* curr2=top;

	while(curr2->next&&curr2->next->next)
	{
		curr1=curr1->next;
		curr2=curr2->next->next;
	}

	cout<<curr1->value<<endl;
}

int main()
{

    int n=1;
	int ara[]={1,5,3,6,3,4,6,8,5,32,4,56,8,54,-34,-1,3,45,5,64};

	for(int i=0;i<n;i++)
    push_in_stack(ara[i]);

    print_stack();
    pop_from_stack();
    print_stack();

    cout<<size_of_stack()<<endl;
    first_element_of_stack();
	last_element_of_stack();
	middle_element_of_stack();


    return 0;

}
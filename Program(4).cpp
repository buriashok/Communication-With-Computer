#include<bits/stdc++.h>
using namespace std;

class Node
{
	public: 
	int data;
	Node *Next;
};

void printlist(Node *n)
{
	while(n!=NULL)
	{
		cout<<n->data<<" ";
		n=n->Next;
	}
}

int main()
{
	Node *head=NULL;
	Node *Second=NULL;
	Node *Third=NULL;
	
	head=new Node();
	Second=new Node();
	Third=new Node();
	
	cin>>head->data;
	head->Next=Second;
	
	cin>>Second->data;
	Second->Next=Third;
	
	cin>>Third->data;
	Third->Next=NULL;
	
	printlist(head);
	
	return 0;
	
}

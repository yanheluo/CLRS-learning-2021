#include<bits/stdc++.h>
using namespace std;
class llist
{
	private:
	int value;
	llist * pre;
	llist * next;
	public:
	llist()
	{
	value=0;
	pre=NULL;
	next=NULL;
	}
	int size(){
	int result=1;
	llist *p;
	p=pre;
	if(p==NULL)
	{
		p=next;
		while(p->next!=NULL)
		{p=p->next; result++;}
		return result;
	}
	else{
	while(p->pre!=NULL)
	 	p=p->pre;
	while(p->next!=NULL)
	{p=p->next;result++;}
	return result;
	    }
	return result;
		}
	bool empty()
	{
	while(next==NULL)
		return true;
	return false;
	}
	int value_at(int index){
	llist * p;
	p=pre;
	while(p->pre!=NULL)
		p=p->pre;
	for(int i=0;i<index-1;i++)
	{
		p=p->next;
	}
		return p->value;
	}
	void push_front(int value){
		llist *p;
		p=pre;
		while(p->pre!=NULL)
		{
		p=p->pre;
		}
		llist frontone;
		llist l;
		l=*p;
		frontone.next=l.pre;
		l.pre=frontone.next;
		frontone.value=value;
	}
	void pop_front()
	{
		llist *p;
		
		p=pre;
		while(p->pre!=NULL){
		p=p->pre;
		}
		p->next->pre=NULL;
		p->next=NULL;
	}
	void push_back(int value)
	{
		llist *p;
		p=next;
		while(p->next!=NULL)
		{
			p=p->next;
		}
		llist back;
		llist l;
		l=*p;
		back.pre=next;
		l.next=back.pre;
		back.value=value;

	}
	void pop_back()
	{
		while(next->next!=NULL)
		{
			next=next->next;
		}
		next->pre=NULL;
		next=NULL;
	}
	int front()
	{
		llist *p;
		p=pre;
		while(p->pre!=NULL)
			p=p->pre;
		return p->value;
	}
	int back()
	{
		llist *p;
		p=next;
		while(p->next!=NULL)
			p=p->next;
		return p->value;
	}
	void insert(int index,int value)
	{
		llist *p;
		p=pre;
		while(p->pre!=NULL)
			p=p->pre;
		for(int i=0;i<index;i++)
			p=p->next;
	}
	void erase(int index)
	{
		llist *p;
		p=pre;
		while(p->pre!=NULL)
			p=p->pre;
		for(int i=0;i<index;i++)
			p=p->next;
		p->pre->next=p->next->pre;
		p->next->pre=p->pre->next;
		p->pre=NULL;
		p->next=NULL;
	}
	int value_n_from_end(int n)
	{
		llist *p;
		p=next;
		while(p->next!=NULL)
			p=p->next;
		for(int i=0;i<n;i++)
			p=p->pre;
		return p->value;
	}
	void reverse()
	{
		llist *p;
		p=pre;
		while(p->pre!=NULL)
			p=p->pre;
		llist *t;
		while(p->next!=NULL)
		{
			p=p->next;
			t=p->pre;
			p->pre=p->next;
			p->next=p->pre;
		}
	}
	void remove_value(int value)
	{
		llist *p;
		p=pre;
		while(p->pre!=NULL)
			p=p->pre;
		while(p->next!=NULL)
		{p=p->next;
			if(p->value==value)
			{
			p->pre->next=p->next->pre;
			p->next->pre=p->pre->next;
			p->pre=NULL;
			p->next=NULL;
			}
		}	
	}
};
int main()
{
	printf("A Linked List Implement\n");
}

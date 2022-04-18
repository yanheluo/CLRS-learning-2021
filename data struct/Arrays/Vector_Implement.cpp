#include<bits/stdc++.h>
using namespace std;
struct mvector{
 int size;
 int capacity;
 int *p;
};
void push(mvector &myv,int number){
	if(myv.size<myv.capacity)
	{
		myv.p[myv.size]=number;
	}
	else
	{
		myv.capacity=myv.capacity*2;
		int array[2*myv.capacity];
		for(int i=0;i<myv.size;i++)
			array[i]=myv.p[i];
		myv.p=array;
    array[myv.size]=number;
	}
	myv.size++;
}
void init(mvector &my)
{
my.size=0;
my.capacity=2;
my.p=new int[2];
}
int size(mvector &my)
{
return my.size;
}
int capacity(mvector &my)
{
return my.capacity;}
bool is_empty(mvector &my)
{
	if(my.size==0)
		return true;
	return false;
}
int at(mvector &my,int index)
{
	if(index<=my.capacity-1)
	return my.p[index];
	else if(index<0)
	return -1;
	else
	return -1;
return -1;
}
void insert(mvector &my,int index,int item){
	if(my.size==my.capacity)
	{
		my.capacity=my.capacity*2;
		int* o=new int[my.capacity];
		for(int i=0;i<my.size;i++)
		 o[i]=my.p[i];
		my.p=o;		
	}
	if(index>0&&index<my.capacity)
	{
	 for(int i=index;i<my.capacity-1;i++)
		my.p[i+1]=my.p[i];
	 my.p[index]=item;
	}
	else
	{
	printf("Please insert in a right place!");
	}
}
void prepend(mvector &my,int item){
	insert(my,0,item);
}
int pop(mvector &my)
{
	if(my.size==0)
		return -1;
	else{

		int r= my.p[my.size-1];
		my.p[my.size-1]=-1;
		return r;
	}
}
void del(mvector &my,int index)
{
	if(index>=0&&index<my.capacity)
	{
		my.p[index]=-1;
		for(int i=index;i<my.capacity-1;i++)
		{
			my.p[i]=my.p[i+1];
		}
	}
	else
	{
		printf("Delete in a wrong place");
	}
}

int main(){
struct mvector v;
init(v);
printf("where can i?");
push(v,1);
push(v,2);
push(v,3);
for(int i=0;i<3;i++)
printf("here is %d",v.p[i]);
return 1;
}


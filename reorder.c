#include <stdio.h>
#include <stdlib.h>
struct node{
	int data;
	struct node *next;
	};
	struct node *start=NULL,*p;
	
	void add_node(int val){
		p=(struct node *)malloc(sizeof(struct node ));
		p->data=val;
		if(start==NULL)
		{
			p->next=NULL;
		}else
		{
			p->next=start;
		}
		start=p;
		}
		
	void reorder(){
		int tmp;
		p=start;
		struct node*t;
		while(p!=NULL)
		{
			t=p->next;
			while(t!=NULL)
			{
				if(t->data<p->data)
				{   tmp=p->data;
					p->data=t->data;
					t->data=tmp;
				}
				t=t->next;
			}
			p=p->next;
		}
	}
	
	void display(){
		p=start;
		while(p!=NULL)
		{
			printf("%i\n",p->data);
			p=p->next;
		}
		}
		
	
	int main(){
	int n,v,i;
		printf("enter the number of nodes ");
		scanf("%i",&n);
		for( i=0;i<n;i++)
		{
			printf("enter the data value ");
			scanf("%i",&v);
			add_node(v);
		}
		reorder();
		display();
		}

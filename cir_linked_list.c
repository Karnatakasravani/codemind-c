#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *next;
};
typedef struct Node NODE;
NODE *head=NULL,*tail=NULL,*NN,*temp,*res;
NODE  *newnode(int val)
{
	NN=(NODE *)malloc(sizeof(NODE));
	NN->data=val;
	NN->next=NULL;
	return NN;
}
void insert_at_head(NODE *NN)
{
    if(head==NULL && tail==NULL)
	{
		head=NN;
		tail=NN;
		NN->next=head;//
	}
	else	
	{
		NN->next=head;
		head=NN;
		tail->next=head;//NN
	}
}
void display()
{
	if(head==NULL && tail==NULL)
	{
		printf("NO Nodes\n");
		return;
	}
	else
	{
	 temp=head;
		while(temp->next!=head)
	 {
	   printf("%d %d %d\n",temp,temp->data,temp->next);
	   temp=temp->next;
	 }
	printf("%d %d %d\n",temp,temp->data,temp->next);
   }
   printf("\n");
}
void insert_at_end(NODE *NN)
{
	if(head==NULL && tail==NULL)
	{
		head=NN;
		tail=NN;
		head->next=head;
	}
	else
	{
		tail->next=NN;
		tail=NN;
		tail->next=head;
	}
}
void insert_by_pos(NODE *NN,int pos)
{
	int p;
	temp=head;
	for(p=1;p<pos-1;p++)
	{
		if(temp->next==head)
		{
			printf("INSERTION IS NOT POSSIBLE\n");
			return;
		}
		temp=temp->next;
	}
	NN->next=temp->next;
	temp->next=NN;
}
NODE *Delete_at_head()
{
	if(head==NULL && tail==NULL)
	{
		return NULL;
	}
	else if(head==tail)
	{
		res=head;
		head=NULL;
		tail=NULL;
		return res;
	}
	else
	{
		res=head;
		head=head->next;
		tail->next=head;
		res->next=NULL;
		return res;
	}
}
NODE* Delete_at_end()
{
  if(head==NULL && tail==NULL)
	{
		return NULL;
	}
	if(head==tail)
	{
		res=head;
		head=NULL;
		tail=NULL;
		return res;
	}
	temp=head;
	while (temp->next->next!=head)
	{
		temp=temp->next;
	}
	res=tail;
	temp->next=head;
	tail=temp;
	res->next=NULL;
	return res;
}
NODE* Delete_by_pos(int pos)
{
	int p;
	temp=head;
	for(p=1;p<pos-1;p++)
	{
		if(temp->next==head)
		{
			printf("deleetion is not possible\n");
			return NULL;
		}
		temp=temp->next;	
	}
	res=temp->next;
	temp->next=res->next;
	res->next=NULL;
	return res;
}
int main()
{
	int ch,val,pos;
	while(1)
	{
		printf("1.insert at head\n2.insertr at end\n 3.insert by position \n4.display\n5.delete at head \n6.delete at end\n7.delete by pos\n8.exit:");
		scanf("%d",&ch);
	
	if(ch==1)
	{
	 //insert at head  	
      scanf("%d",&val);
      NN=newnode(val);
      insert_at_head(NN);
	}
	else if(ch==2)
	{
	 //insert_end
	 scanf("%d",&val);
      NN=newnode(val);
      insert_at_end(NN);	
	}
	else if(ch==3)
	{
	 //insert at pos
	 scanf("%d %d",&val,&pos);
      NN=newnode(val);
      insert_by_pos(NN,pos);
	}
	else if(ch==4)
	{
	//display
	display();
	}
	else if(ch==5)
	{
		//delete at head
		res=Delete_at_head();
		if(res==NULL)
		{
			printf("NO NODES\n");
		}
		else
		{
			printf("%d\n",res->data);
			free(res);
		}
	}
	else if(ch==6)
	{
	res=Delete_at_end();
		if(res==NULL)
		{
			printf("NO NODES\n");
		}
		else
		{
			printf("%d\n",res->data);
			free(res);
		}
	}
	else if(ch==7)
	{
		scanf("%d",&pos);
	res=Delete_by_pos(pos);
		if(res==NULL)
		{
			printf("NO NODES\n");
		}
		else
		{
			printf("%d\n",res->data);
			free(res);
		}
	}
	else
	{
		break;
	}
 }
	
}

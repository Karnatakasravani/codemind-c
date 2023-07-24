/*#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *left;
	struct Node *right;
};
typedef struct Node NODE;
NODE *root=NULL,*temp,*par,*NN,*res;
NODE *NewNode(int val)
{
	NN=(NODE *)malloc(sizeof(NODE));
	NN->data=val;
	NN->right=NULL;
	NN->left=NULL;
	return NN;
}
void insert(int val)
{
	NN=NewNode(val);
	temp=root;
	if(root==NULL)
	{
		root=NN;
		return;
	}
	while(1)
	{
		if(temp->data==NN->data)//val
		{
			printf("Already in tree\n");
			return;
		}
		else if(temp->data>NN->data)
		{
			if(temp->left!=NULL)
			{
				temp=temp->left;
			}
			else
			{
				temp->left=NN;
				return;
			}
		}
		else if(temp->data<NN->data)
		{
			if(temp->right!=NULL)
			{
				temp=temp->right;
			}
			else
			{
				temp->right=NN;
				return;
			}
		}
	}
}
int  search(int key)
{
	temp=root;
		while(temp)
		{
		if(temp->data==key)
		{
			return 1;
		}
		else if(temp->data>key)
		{
			temp=temp->left;
		}
		else if(temp->data<key)
		{
			temp=temp->right;
		}
	}
	return 0;
}

int levelorder()
{
	return;
}
void inorder(NODE *root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		printf("%d \n",root->data);
		inorder(root->right);
	}
}
void preorder(NODE *root)
{
	if(root!=NULL)
	{
		printf("%d \n",root->data);
		preorder(root->left);
		preorder(root->right);
	}
}
void postorder(NODE *root)
{
	if(root!=NULL)
	{
		postorder(root->left);
		postorder(root->right);
		printf("%d \n",root->data);
	}
}
NODE *Delete(int key)
{
	if(root==NULL)
	{
		return NULL;
	}
	temp=root;
	par=NULL;
	while(temp && temp->data!=key)
	{
		if(temp->data>key)
		{
			par=temp;
			temp=temp->left;
		}
		else if(temp->data<key)
		{
			par=temp;
			temp=temp->right;
		}
	}
    if(temp==NULL);
    {
        return NULL;
	}
	
	if(temp->right==NULL && temp->left==NULL)
	{
		//ZERO child
		res=temp;
		if(par->right!=NULL && par->right->data==key)
		{
			par->right=NULL;
		}
		else if(par->left!=NULL && par->left->data==key)
		{
			par->left=NULL;
		}
		return res;
	}
	else if(temp->left==NULL )
	{
		//single child right
		res=temp;
		if(par->left!=NULL && par->left->data==key)
		{
			par->left=temp->right;
		}
		else if(par->right!=NULL && par->right->data==key)
		{
			par->right==temp->right;
		}
		return res;
	}
	else if(temp->right==NULL)
	{
		//single child left
		res=temp;
		if(par->left!=NULL && par->left->data==key)
		{
			par->left=temp->left;
		}
		else if(par->right!=NULL && par->right->data==key)
		{
			par->right==temp->left;
		}
		return res;
	}
	else if(temp->left!=NULL && temp->right!=NULL)
	{
		//NODE HAS 2 CHILD
		NODE *p,*t;
		int val;
		t=temp->right;
		p=NULL;
		while(t->left)
		{
			p=t;
			t=t->left;
		}
		if(p!=NULL)
		{
			res=t;
			val=t->data;
			t->data=temp->data;
			temp->data=val;
			p->left=t->right;
			return res;
		}
		else
		{
			res=t;
			val=t->data;
			t->data=temp->data;
			temp->data=val;
			temp->right=t->right;
			return res;
		}
	}

}
int main()
{
    int ch,val,key,n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    	scanf("%d",&val);
    	insert(val);
	}
	while(1)
	{
		printf("1.insert 2.delete 3.search 4.inorder 5.preorder 6.postorder 7.levelorder 8.exit");
		scanf("%d",&ch);
		if(ch==1)
		{
			//insert
			scanf("%d",&val);
			insert(val);
		}
		else if(ch==2)
		{
			//delete
			//int key;
			scanf("%d",&key);
			//Delete(key);
			res=Delete(key);
			if(res)
			{
				printf("%d",res->data);
			    free(res);
			}
			else
			{
				printf("Element not found\n");
			}
		}
		else if(ch==3)
		{
			//search
			scanf("%d",&key);
			if(search(key))
			{
				printf("Element found\n");
			}
			else
			{
				printf("Element not found\n");
			}
		}
		else if(ch==4)
		{
			//inorder
			inorder(root);
		}
		else if(ch==5)
		{
			//preorder
			preorder(root);
		}
		else if(ch==6)
		{
			//postoreder
			postorder(root);
		}
		else if(ch==7)
		{
			//levelorder
			levelorder(root);
		}
		else
		{
		     break;	
		}
	}	
}
//50 40 80 30 45 70 90 25 35 42 48 65 100
*/
#include<stdio.h>
#include<stdlib.h>
struct Node{
	struct Node *left;
	int data;
	struct Node *right;
};
typedef struct Node NODE;
NODE *root=NULL,*temp,*NN,*par,*resu;
NODE * NewNode(int val)
{
	NN=(NODE *)malloc(sizeof(NODE));
	NN->data=val;
	NN->right=NULL;
	NN->left=NULL;
	return NN;
}
void inorder(NODE * root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		printf("%d ",root->data);
		inorder(root->right);
	}
}
void preorder(NODE * root)
{
	if(root!=NULL)
	{
		printf("%d ",root->data);
		preorder(root->left);
		preorder(root->right);
	}
}
void postorder(NODE * root)
{
	if(root!=NULL)
	{
		postorder(root->left);
		postorder(root->right);
		printf("%d ",root->data);
	}
}
void levelorder(NODE * root)
{
	
}
void insert(int val)
{
	NN=NewNode(val);
	temp=root;
	if(root==NULL)
	{
		root=NN;
		return;
	}
	while(1)
	{
		if(temp->data==NN->data)
		{
			printf("ELE ALREADY IN TREE\n");
			return;
		}
		else if(temp->data>NN->data)
		{
			if(temp->left!=NULL)
			{
				temp=temp->left;
			}
			else
			{
				temp->left=NN;
				return;
			}
		}
		else if(temp->data < NN->data)
		{
			if(temp->right!=NULL)
			{
				temp=temp->right;
			}
			else
			{
				temp->right=NN;
				return;
			}
		}
	}
}
int search(int val)
{
	temp=root;
	if(root==NULL)
	{
		return 0;
	}
	while(1)
	{
		if(temp->data==val)
		{
			return 1;
		}
		if(temp->data>val)
		{
			temp=temp->left;
		}
		if(temp->data<val)
		{
			temp=temp->right;
		}
		if(temp==NULL)
		{
			return 0;
		}
	}
}
NODE *delet(int key)
{
	if(root==NULL)
	{
		return NULL;
	}
	temp=root;
	par=NULL;
	while(temp && temp->data!=key)
	{
		if(temp->data>key)
		{
			par=temp;
			temp=temp->left;
		}
		else if(temp->data < key)
		{
			par=temp;
			temp=temp->right;
		}
	}
	if(temp==NULL)
	{
		return NULL;
	}
	if(temp->right==NULL && temp->left==NULL)
	{
		resu=temp;
		if(par->right!=NULL && par->right->data==key)
		{
			par->right=NULL;
		}
		else if(par->left!=NULL && par->left->data==key)
		{
			par->left=NULL;
		}
		return resu;
	}
	else if(temp->left==NULL)
	{
		//single right child
		resu=temp;
		if(par->left!=NULL && par->left->data==key)
		{
			par->left=temp->right;
		}
		else if(par->right!=NULL && par->right->data==key)
		{
			par->right=temp->right;
		}
		return resu;
	}
	else if(temp->right==NULL)
	{
		//single left child
		resu=temp;
	    if(par->left!=NULL && par->left->data==key)
		{
			par->left=temp->left;
		}
		else if(par->right!=NULL && par->right->data==key)
		{
			par->right=temp->left;
		}
			return resu;
	}
	else if(temp->left!=NULL && temp->right!=NULL)
	{
		//node has 2 children
		NODE *p,*t;
		int val;
		t=temp->right;
		p=NULL;
		while(t->left)
		{
			p=t;
			t=t->left;
		}
		if(p!=NULL)
		{
			resu=t;
			val=t->data;
			t->data=temp->data;
			temp->data=val;
			p->left=t->right;
			return resu;
		}
		else
		{
			resu=t;
			val=t->data;
			t->data=temp->data;
			temp->data=val;
			temp->right=t->right;
			return resu;
		}
	}
}
int main()
{
	int i,key,n,ch,val;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&val);
		insert(val);
	}
	while(1)
	{
		printf("\n1.INSERT 2.DELETE 3.SEARCH 4.INORDER 5.PREORDER 6.POSTOREDER 7.LEVELORDER 8.EXIT:");
		scanf("%d",&ch);
		int key,res;
		if(ch==1)
		{
			scanf("%d",&key);
			insert(key);
		}
		else if(ch==2)
		{
			scanf("%d",&key);
			resu=delet(key);
			if(resu)
			{
				printf("%d\n",resu->data);
				free(resu);
			}
			else
			{
				printf("ele not found\n");
			}
		}
		else if(ch==3)
		{
			scanf("%d",&key);
			if(search(key))
			{
				printf("ELEMENT FOUND\n");
			}
			else
			{
				printf("ELEMENT NOT FOUND\n");
			}
		}
		else if(ch==4)
		{
			inorder(root);
		}
		else if(ch==5)
		{
			preorder(root);
		}
		else if(ch==6)
		{
			postorder(root);
		}
		else if(ch==7)
		{
			levelorder(root);
		}
		else
		{
			break;
		}
	}
}
/*
13
50 40 80 30 45 70 90 25 35 42 48 65 100
*/

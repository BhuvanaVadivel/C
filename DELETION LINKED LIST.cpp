#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node *nxt;
}*h=NULL,*n=NULL,*t=NULL,*s=NULL;
int main()
{
while(1)
{
	int ch,v;
	
	scanf("%d",&ch);
switch(ch)
{
    case 1:
	n=(struct node*)malloc(sizeof(struct node));
	printf("enter value:");
	scanf("%d",&n->data);
	if(h==NULL)
	{
	h=n;
	t=n;
	}
	else{
	t->nxt=n;
	t=n;
    }
    printf("Node is inserted!\n");
      break;
    case 2:
	if(h==NULL)
	printf("List is empty\n");
	else{
	v=h->data;
	h=h->nxt;
	if(h==NULL) t=NULL;
	printf("%d is deleted in front\n",v);
	}
      break;
    case 3:
	if(h==NULL)
	printf("List is empty\n");
	else {
	printf("enter element to delete:");
	scanf("%d",&v);
	n=h;
	s=NULL;
	if(n->data==v && t==h)
	{
	h=NULL;
	t=NULL;
	printf("%d is deleted\n",v);
    break;
    }
    else if(n->data==v)
    {
        h=h->nxt;
	    printf("%d is deleted\n",v);
        break;
    }
    while(n->data!=v && n->nxt!=NULL)
	{
	s=n;
	n=n->nxt;
    }
    if(n->data==v)
	{
    	s->nxt=n->nxt;
    	if(n==t)
    	t=s;
        printf("%d is deleted\n",v);
    }
    else
	printf("%d is not in the list\n",v);
    }
      break;
    case 4:
	if(h==NULL)
	printf("List is empty\n");
    else{
	v=t->data;
	n=h;
	s=NULL;
    while(n->nxt!=NULL)
	{
	s=n;
	n=n->nxt;
    }
	if(h==t)
	{
	h=NULL;
	t=NULL;
	}else
	{
	s->nxt=n->nxt;
	t=s;
    }
    printf("%d is deleted\n",v);
    }
    break;
    case 5:
	if(h==NULL)
	printf("List is empty\n");
	else{
	n=h;
	printf("List:\n");
    while(n->nxt!=NULL)
	{
	printf("%d ",n->data);
	n=n->nxt;
    }
	printf("%d\n",n->data);
    }
    break;
    case 6:
    exit(0);
    break;
    default:printf("wrong choice\n");
	}
  }
}

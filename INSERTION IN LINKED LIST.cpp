#include <stdio.h>
#include <stdlib.h>
struct node{
int data;
struct node *nxt;
}*t=NULL,*h=NULL,*n=NULL,*e=NULL;
int main()
{
while(1)
{
int ch;
printf("1-insert begining\n2-insert end\n3-Ins mid after a no");
printf("\n4-display\n5-exit\nyour choice:");
scanf("%d",&ch);
switch(ch){
case 1://insert beginning
	n=(struct node*)malloc(sizeof(struct node));
	printf("enter val:");
	scanf("%d",&n->data);
if(h==NULL){ //empty list
	h=n;
	t=n;
	}else{
	n->nxt=h;
	h=n;
}
	n=NULL;
	printf("node inserted\n");
	break;
case 2: // insert end
	n=(struct node*)malloc(sizeof(struct node));
	printf("enter val:");
	scanf("%d",&n->data);
	if(h==NULL){ //empty list
	h=n;
	t=n;
	}else{
	t->nxt=n;
	t=n;
}
	n=NULL;
	printf("node inserted\n");
	break;
case 3: // insert after a no;
	n=(struct node*)malloc(sizeof(struct node));
	printf("enter val:");
	scanf("%d",&n->data);
	int x;
	printf("enter no before the val:");
	scanf("%d",&x);
	e=h;
if(e==NULL)
{
	printf("List is empty\n");
	break;
}
while(e->data!=x && e->nxt!=NULL)
{
	e=e->nxt;
}
if(e->data==x)
{
	n->nxt=e->nxt;
	e->nxt=n;
	printf("node inserted\n");
}else
	printf("Can't insert given no %d not in the list\n",x);
	n=NULL;
	e=NULL;
	break;
case 4:
	e=h;
while(e->nxt!=NULL)
{
	printf("%d ",e->data);
	e=e->nxt;
}
printf("%d\n",e->data);
	e=NULL;
	break;
case 5:
	exit(0);
	break;
	default:
	printf("wrong choice\n");
  	}
  }
}


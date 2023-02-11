# C
#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
}*head=NULL;
int len;
void append(void);
void addatbegin(void);
void addatafter(void);
int length(void);
void  delete(void);
void display(void);
void main(void)
{
    int choice;
    while(1)
    {
        printf("Singly linked list operations\n");
        printf("1.Append\n");
        printf("2.Addatbegin\n");
        printf("3.Addatafter\n");
        printf("4.Length\n");
        printf("5.Delete\n");
        printf("6.Display\n");
        printf("7.Exit\n");
        printf("Enter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            
            case 1 : append();
                     break;
            case 2 : addatbegin();
            break;
            case 3: addatafter();
            break;
            case 4 :len = length(); 
                    printf("Length :%d\n\n",len);
            break;
            case 5 :delete();
            break;
            case 6 :display();
            break;
            case 7 :exit(1);
            default: printf("invalid input\n\n");
            
        }
    }
}
void append(void)
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the node data :");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
    }
    else
    {
        struct node*temp;
        temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
    }
}
int length()
{
    int count=0;
    struct node*temp;
    temp=head;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    return count;
}
void display(void)
{
    struct node*newnode;
    head=newnode;
    if(head==NULL)
    {
        printf("List is Empty!!!");
    }
    else
    {
        while(newnode!=NULL)
        {
            printf("%d-->",newnode->data);
            newnode=newnode->next;
        }
        printf("\n\n");
    }
}
void addatbegin(void)
{
    struct node *newnode;
newnode = (struct node*)malloc(sizeof(struct node)); 
newnode->data = head;
if(head == NULL)
{
newnode->next = NULL; 
head = newnode;
}
else
{
newnode->next = head; 
head = newnode;
}
printf("\nOne node inserted!!!\n");
}
void addatafter(void)
{
    
}
void delete(void)
{
    
}

#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *link;
};
int main() 
{
    struct node *head=NULL,*newnode=NULL,*temp=NULL;
    int n,i;
    for(i=0;i<=3;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter the data: ");
        scanf("%d",&newnode->data);
        if(head==NULL)
        {
            head=newnode;
            temp=newnode;
        }
        else
        {
            temp->link=newnode;
            temp=newnode;
        }
        
    }
    temp=head;
    while(temp!=NULL)
    {
        //printf("%d",head);
        printf("\nthe data is: %d",temp->data);
        temp=temp->link;
    }
    struct node *insertnode;
    insertnode=(struct node*)malloc(sizeof(struct node));
    printf("\nenter the inserting data: ");
    scanf("%d",&insertnode->data);
    insertnode->link=head;
    head=insertnode;
   
    temp=head;
    while(temp!=NULL)
    {
        printf("\nthe data is: %d",temp->data);
        temp=temp->link;
    }
    return 0;
}
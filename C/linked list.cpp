#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *link;
};

int main(){
    struct node *new_node=NULL,*head=NULL;
    new_node=(struct node *)malloc(sizeof(struct node));
    printf("enter the data: ");
    scanf("%d",&new_node->data);
    new_node->link=NULL;
    head=new_node;
    
    struct node *newnode2=(struct node *)malloc(sizeof(struct node));
    printf("enter data in 2nd node: ");
    scanf("%d",&newnode2->data);
    new_node->link=newnode2;
    newnode2->link=NULL;
    //printf("%d->%d",new_node->data,newnode2->data);
    struct node *newnode3=(struct node *)malloc(sizeof(struct node));
    newnode3->link=NULL;
    newnode2->link=newnode3;
    printf("enter data in 3rd node: ");
    scanf("%d",&newnode3->data);
    printf("%d->%d->%d",new_node->data,newnode2->data,newnode3->data);
    return 0;
}
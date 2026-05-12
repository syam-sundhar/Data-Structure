#include<stdio.h>
#include<stdlib.h>

struct node{
	struct node *prev,*next;
	int data;
};
struct node *head,*temp,*tail;
void create(){
	struct node *newnode=0;
	int n;
	printf("enter NO.OF nodes: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		newnode=(struct node *)malloc(sizeof(struct node));
		printf("enter data at position %d",i+1);
		scanf("%d",&newnode->data);
		if(i==0){
			head=tail=newnode;
			newnode->prev=NULL;
		}
		else{
			tail->next=newnode;
			newnode->prev=tail;
			tail=newnode;
		}
	}
}

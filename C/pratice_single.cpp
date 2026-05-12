//single linked list
#include <stdio.h>
#include <stdlib.h>

struct node{
	struct node *link;
	int data;
};
struct node *head,*temp;

void create(){
	int n,i;
	printf("enter no of nodes: ");
	scanf("%d",&n);
	struct node *newnode;
	for(i=0;i<n;i++){
		newnode=(struct node *)malloc(sizeof(struct node));
		printf("enter the data at node %d : ",i+1);
		scanf("%d",&newnode->data);
		if (i==0){
			head=temp=newnode;
		}
		else{
			temp->link=newnode;
			newnode->link=NULL;
			temp=newnode;
		}
	}
	printf("\n");
}

void display(){
	temp=head;
	while(temp!=NULL){
		printf("%d-> ",temp->data);
		temp=temp->link;
	}
	printf("\n");
}

void in_fro(){
	struct node *newnode2=(struct node *)malloc(sizeof(struct node));
	printf("enter the newly inserting data at front: ");
	scanf("%d",&newnode2->data);
	newnode2->link=head;
	head=newnode2;
	printf("\nAFTER INSERTING DATA AT FRONT: ");
	display();
}

void in_end(){
	struct node *newnode2=(struct node *)malloc(sizeof(struct node));
	printf("\nenter the data to insert at end: ");
	scanf("%d",&newnode2->data);
	temp=head;
	while(temp->link!=NULL){
		temp=temp->link;
	}
	temp->link=newnode2;
	newnode2->link=NULL;
	printf("\nAFTER INSERTING DATA AT END: ");
	display();
}

void in_pos(){
	int pos;
	printf("\nenter the position : ");
	scanf("%d",&pos);
	struct node *newnode2=(struct node *)malloc(sizeof(struct node));
	printf("enter the data: ");
	scanf("%d",&newnode2->data);
	newnode2->link=NULL;
	if (pos==1){
		newnode2->link=head;
		head=newnode2;
	}
	else{
		temp=head;
		for(int i=1;i<pos-1;i++){
			temp=temp->link;
		}
		newnode2->link=temp->link;
		temp->link=newnode2;
	}
	printf("\nAFTER INSERTING DATA AT POSITION %d: ",pos);
	display();
}

void del_fro(){
	if (head==NULL){
		printf("\nTHE LIST IS EMPTY! ");
	}
	else{
		temp=head;
		head=head->link;
		free(temp);
		printf("\nAFTER DELETING DATA AT front: ");
		display();
	}
}

void del_end(){
	if (head==NULL) printf("\nTHE LIST IS EMPTY! ");
	else if(head->link==0){
		free(head);
		head=0;
		printf("\nAFTER DELETING DATA AT END: ");
		display();
	}
	
	else{
		struct node *pre=0;
		temp=head;
		while(temp->link!=NULL){
			pre=temp;
			temp=temp->link;
		}
		pre->link=NULL;
		free(temp);
		printf("\nAFTER DELETING DATA AT END: ");
		display();
	}
}

void del_pos(){
	int pos;
	printf("enter the position : ");
	scanf("%d",&pos);
	if(head==NULL){
		printf("THE LIST IS EMPTY!");
	}
	else if(pos==1){
		temp=head;
		head=head->link;
		free(temp);
		printf("\nAFTER DELETING DATA AT POSITION %d: ",pos);
		display();
	}
	else{
		struct node *pre;
		temp=head;
		for(int i=1;i<pos-1;i++){
			temp=temp->link;
		}
		pre=temp->link;
		temp->link=pre->link;
		free(pre);
		printf("\nAFTER DELETING DATA AT POSITION %d: ",pos);
		display();
	}
	
}

int main(){
	create();
	display();
	int choice,ch;
	printf("\n1. INSERTING NODE AT FRONT");
	printf("\n2. INSERTING NODE AT END");
	printf("\n3. INSERTING NODE AT PARTICULAR POSITION");
	printf("\n4. DELETING NODE AT FRONT");
	printf("\n5. DELETING NODE AT END");
	printf("\n6. DELETING NODE AT PARTICULAR POSITION");
	printf("\n7. COUNTING");
	printf("\n8. REVERSING THE LIST");
	do{
		printf("\nEnter you choice: ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				in_fro();
				break;
			case 2:
				in_end();
				break;
			case 3:
				in_pos();
				break;
			case 4:
				del_fro();
				break;
			case 5:
				del_end();
				break;
			case 6:
				del_pos();
				break;
			default:
				printf("\nINVALIDE INPUT!");
		}
		printf("\ndo you want another choice: (YES: 1 || NO: 0)");
		scanf("%d",&ch);
	}while(ch);
	return 0;
}

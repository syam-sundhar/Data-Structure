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
		printf("enter data at position %d: ",i+1);
		scanf("%d",&newnode->data);
		newnode->next=NULL;
		newnode->prev=NULL;
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

void display(){
	temp=head;
	while(temp!=NULL){
		printf("%d->",temp->data);
		temp=temp->next;
	}
	printf("\n");
}

void in_fro(){
	struct node *newnode2=(struct node *)malloc(sizeof(struct node));
	printf("ENTER THE INSERTING DATA: ");
	scanf("%d",&newnode2->data);
	newnode2->prev=NULL;
	newnode2->next=head;
	head->prev=newnode2;
	head=newnode2;
	printf("AFTER INSERTING AT FORNT: ");
	display();
}

void in_end(){
	struct node *newnode2=(struct node *)malloc(sizeof(struct node));
	printf("ENTER THE INSERTING DATA: ");
	scanf("%d",&newnode2->data);
	newnode2->prev=tail;
	newnode2->next=NULL;
	tail->next=newnode2;
	tail=newnode2;
	printf("AFTER INSERTING AT END: ");
	display();	
}

void in_pos(){
	struct node *newnode2=(struct node *)malloc(sizeof(struct node));
	int pos;
	printf("enter position: ");
	scanf("%d",&pos);
	printf("ENTER THE INSERTING DATA: ");
	scanf("%d",&newnode2->data);
	if (pos==1){
		newnode2->prev=NULL;
		newnode2->next=head;
		head->prev=newnode2;
		head=newnode2;
	}
	else{	
		temp=head;
		for (int i=1;i<pos-1;i++){
			temp=temp->next;
		}
		newnode2->next=temp->next;
		newnode2->prev=temp;
		temp->next->prev=newnode2;
		temp->next=newnode2;
	}
	printf("AFTER INSERTING AT POSITION %d: ",pos);
	display();
}

void del_fro(){
	if(head==NULL) printf("list is already empty! ");
	else if(head->next==NULL){
		free(head);
		head=tail=NULL;
		printf("list is empty now ");
	}
	else{
		head=head->next;
		free(head->prev);
		head->prev=NULL;
		printf("AFTER DELETING AT FRONT: ");
		display();
	}
}

void del_end(){
	if(head==NULL) printf("list is already empty! ");
	else if(head->next==NULL){
		free(head);
		printf("list is empty now ");
		head=tail=NULL;
	}
	else{
		tail=tail->prev;
		free(tail->next);
		tail->next=NULL;
		printf("AFTER DELETING AT FRONT: ");
		display();
	}
}

void del_pos(){
	int pos;
	printf("enter position to delete: ");
	scanf("%d",&pos);
	if(head==NULL) printf("list is already empty! ");
	else if(pos==1){
		head=head->next;
		free(head->prev);
		head->prev=NULL;
		printf("AFTER DELETING AT FRONT: ");
		display();
	}
	else{
		temp=head;
		for(int i=1;i<pos-1;i++){
			temp=temp->next;
		}
		temp->next=temp->next->next;
		free(temp->next->prev);
		temp->next->prev=temp;
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
